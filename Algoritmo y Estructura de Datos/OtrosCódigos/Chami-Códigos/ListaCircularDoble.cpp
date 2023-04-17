#include "ListaCircularDoble.hpp"
#include <iostream>
using namespace std;

struct StructDoubleCircleList
{
  int dataSize;
  int size;
  DoubleCircleNode first;
};

struct StructDoubleCircleNode
{
  void *value;
  DoubleCircleNode next;
  DoubleCircleNode prev;
};

// constructor
DoubleCircleList createDoubleCircleList(int dataSize)
{
  DoubleCircleList list = new StructDoubleCircleList;

  list->dataSize = dataSize;
  list->size = 0;
  list->first = NULL;

  return list;
}
DoubleCircleNode createDoubleCircleNode(DoubleCircleList list, void *value)
{
  DoubleCircleNode node = new StructDoubleCircleNode;

  int dataSize = getDataSizeDoubleCircleList(list);

  node->next = NULL;
  node->prev = NULL;

  node->value = malloc(dataSize);

  memcpy(node->value, value, dataSize);

  return node;
}

// destructor
void destroyDoubleCircleList(DoubleCircleList list)
{
  DoubleCircleNode node = list->first;
  DoubleCircleNode next;
  DoubleCircleNode last = getDoubleCircleNode(list, getSizeDoubleCircleList(list) - 1);
  last->next = NULL;

  while (node != NULL)
  {
    next = node->next;
    destroyDoubleCircleNode(node);
    node = next;
  }

  delete list;
}
void destroyDoubleCircleNode(DoubleCircleNode node)
{
  free(node->value);
  delete node;
}

// insert
void insertDoubleCircleItem(DoubleCircleList list, void *value, int index)
{
  int size = getSizeDoubleCircleList(list);

  if (index < 0)
    index = 0;

  DoubleCircleNode node = createDoubleCircleNode(list, value);

  if (index == 0)
  {
    // caso size 0
    if (size == 0)
    {
      node->next = node;
      node->prev = node;
    }
    else
    {
      node->next = list->first;
      node->prev = list->first->prev;
      list->first->prev->next = node;
      list->first->prev = node;
    }
      list->first = node;
  }
  else
  {
    DoubleCircleNode prev = getDoubleCircleNode(list, index - 1);
    node->next = prev->next;
    node->prev = prev;
    prev->next->prev = node;
    prev->next = node;
  }
  list->size++;
}

// get
void *getDoubleCircleItem(DoubleCircleList list, int index)
{
  if (index < 0)
    return NULL;

  return getDoubleCircleNode(list, index)->value;
}
DoubleCircleNode getDoubleCircleNode(DoubleCircleList list, int index)
{
  DoubleCircleNode node = list->first;

  for (int i = 0; i < index; i++)
    node = node->next;

  return node;
}

// remove
void removeDoubleCircleItem(DoubleCircleList list, int index)
{
  if (index < 0)
    return;

  DoubleCircleNode prev = getDoubleCircleNode(list, index - 1);
  DoubleCircleNode node = prev->next;
  
  if (index == 0)
    list->first = node->next;
  prev->next = node->next;
  node->next->prev = prev;

  destroyDoubleCircleNode(node);
  list->size--;
}

// functions
int getSizeDoubleCircleList(DoubleCircleList list)
{
  return list->size;
}
int getDataSizeDoubleCircleList(DoubleCircleList list)
{
  return list->dataSize;
}
void showSimpleCircleList(DoubleCircleList list);