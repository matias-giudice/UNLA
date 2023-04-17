struct StructStack;
typedef struct StructStack *Stack;

struct StructStackNode;
typedef struct StructStackNode *StackNode;

// constructor
Stack createStackList(int dataSize);
StackNode createStackNode(Stack stack, void *value);

// destructor
void destroyStackList(Stack stack);
void destroyStackNode(StackNode node);

// primitivas
void pushStackItem(Stack stack, void *value);
void *popStackItem(Stack stack);

// get item
void *getStackItem(Stack stack, int index);
StackNode getStackNode(Stack stack, int index);

// functions
int getSizeStack(Stack stack);
int getDataSizeStack(Stack stack);