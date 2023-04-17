struct StructSimpleList;
typedef struct StructSimpleList *SimpleList;

struct StructSimpleNode;
typedef struct StructSimpleNode *SimpleNode;

// constructor
SimpleList createSimpleList(int dataSize);
SimpleNode createSimpleNode(SimpleList list, void *value);

// destructor
void destroySimpleList(SimpleList list);
void destroySimpleNode(SimpleNode node);

// insert
void insertSimpleListItem(SimpleList list, void *value, int index = 0);

// get
void *getSimpleListItem(SimpleList list, int index);
SimpleNode getSimpleListNode(SimpleList list, int index);

// remove
void removeSimpleListItem(SimpleList list, int index);

// functions
int getSizeSimpleList(SimpleList list);
int getDataSizeSimpleList(SimpleList list);
