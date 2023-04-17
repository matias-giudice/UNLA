struct StructDoubleCircleList;
typedef struct StructDoubleCircleList *DoubleCircleList;

struct StructDoubleCircleNode;
typedef struct StructDoubleCircleNode *DoubleCircleNode;

// constructor
DoubleCircleList createDoubleCircleList(int dataSize);
DoubleCircleNode createDoubleCircleNode(DoubleCircleList list, void *value);

// destructor
void destroyDoubleCircleList(DoubleCircleList list);
void destroyDoubleCircleNode(DoubleCircleNode node);

// insert
void insertDoubleCircleItem(DoubleCircleList list, void *value, int index = 0);

// get
void *getDoubleCircleItem(DoubleCircleList list, int index);
DoubleCircleNode getDoubleCircleNode(DoubleCircleList list, int index);

// remove
void removeDoubleCircleItem(DoubleCircleList list, int index);

// functions
int getSizeDoubleCircleList(DoubleCircleList list);
int getDataSizeDoubleCircleList(DoubleCircleList list);