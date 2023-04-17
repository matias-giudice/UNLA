#include "ListaPila.hpp"
#include <iostream>
using namespace std;

struct StructStack
{
  int dataSize;
  int size;
  StackNode top;
};

struct StructStackNode
{
  void *value;
  StackNode next;
};

// constructor
Stack createStackList(int dataSize)
{
  Stack stack = new StructStack;
  stack->dataSize = dataSize;
  stack->size = 0;
  stack->top = NULL;
  return stack;
}
StackNode createStackNode(Stack stack, void *value)
{
  StackNode node = new StructStackNode;

  node->value = malloc(getDataSizeStack(stack));

  memcpy(node->value, value, getDataSizeStack(stack));

  node->next = NULL;

  return node;
}

// destructor
void destroyStackList(Stack stack)
{
  StackNode node = stack->top;
  StackNode next;

  while (node != NULL)
  {
    next = node->next;
    destroyStackNode(node);
    node = next;
  }

  free(stack);
}
void destroyStackNode(StackNode node)
{
  free(node->value);
  free(node);
}

// primitivas
void pushStackItem(Stack stack, void *value)
{
  StackNode node = createStackNode(stack, value);

  node->next = stack->top;
  stack->top = node;
  stack->size++;
}
void *popStackItem(Stack stack)
{
  if (stack->top == NULL)
    return NULL;

  StackNode node = stack->top;
  stack->top = node->next;
  stack->size--;

  void *value = malloc(getDataSizeStack(stack));
  memcpy(value, node->value, getDataSizeStack(stack));

  destroyStackNode(node);
  return value;
}

// get item
void *getStackItem(Stack stack, int index)
{
  if (index < 0 || index >= getSizeStack(stack))
    return NULL;

  return getStackNode(stack, index)->value;
}
StackNode getStackNode(Stack stack, int index)
{
  StackNode node = stack->top;

  for (int i = 0; i < index; i++)
    node = node->next;

  return node;
}

// functions
int getSizeStack(Stack stack)
{
  return stack->size;
}
int getDataSizeStack(Stack stack)
{
  return stack->dataSize;
}