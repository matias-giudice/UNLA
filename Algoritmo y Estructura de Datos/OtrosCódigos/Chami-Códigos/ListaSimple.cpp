#include "ListaSimple.hpp"
#include <iostream>
using namespace std;

struct StructSimpleList
{
  int dataSize;
  int size;
  SimpleNode first;
};

struct StructSimpleNode
{
  void *value;
  SimpleNode next;
};

// constructor
SimpleList createSimpleList(int dataSize)
{
  SimpleList list = new StructSimpleList;

  list->dataSize = dataSize;
  list->size = 0;
  list->first = NULL;

  return list;
}
SimpleNode createSimpleNode(SimpleList list, void *value)
{
  SimpleNode node = new StructSimpleNode;

  int dataSize = getDataSizeSimpleList(list);

  node->next = NULL;

  node->value = malloc(dataSize);

  memcpy(node->value, value, dataSize);

  return node;
}

// destructor
void destroySimpleList(SimpleList list)
{
  SimpleNode node = list->first;
  SimpleNode next;

  while (node != NULL)
  {
    next = node->next;
    destroySimpleNode(node);
    node = next;
  }

  delete list;
}
void destroySimpleNode(SimpleNode node)
{
  free(node->value);
  delete node;
}

// insert
void insertSimpleListItem(SimpleList list, void *value, int index)
{
  int size = getSizeSimpleList(list);

  if (index < 0)
    index = 0;
  if (index > size)
    index = size;
  
  SimpleNode node = createSimpleNode(list, value);

  if (index == 0)
  {
    node->next = list->first;
    list->first = node;
  }
  else
  {
    SimpleNode prev = getSimpleListNode(list, index - 1);
    node->next = prev->next;
    prev->next = node;
  }
  list->size++;
}

// get
void *getSimpleListItem(SimpleList list, int index)
{
  if (index < 0 || index >= getSizeSimpleList(list))
    return NULL;

  return getSimpleListNode(list, index)->value;
}
SimpleNode getSimpleListNode(SimpleList list, int index)
{
  SimpleNode node = list->first;

  for (int i = 0; i < index; i++)
    node = node->next;

  return node;
}

// remove
void removeSimpleListItem(SimpleList list, int index)
{
  int size = getSizeSimpleList(list);

  if (index < 0 || index >= size)
    return;

  SimpleNode node = getSimpleListNode(list, index);

  index == 0 ? list->first = node->next : getSimpleListNode(list, index - 1)->next = node->next;
  
  destroySimpleNode(node);
  list->size--;
}

// functions
int getSizeSimpleList(SimpleList list)
{
  return list->size;
}
int getDataSizeSimpleList(SimpleList list)
{
  return list->dataSize;
}