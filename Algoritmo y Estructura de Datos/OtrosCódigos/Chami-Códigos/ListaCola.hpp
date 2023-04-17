struct StructQueue;
typedef struct StructQueue *Queue;

struct StructQueueNode;
typedef struct StructQueueNode *QueueNode;

// constructor
Queue createQueueList(int dataSize);
QueueNode createQueueNode(Queue queue, void *value);

// destructor
void destroyQueueList(Queue queue);
void destroyQueueNode(QueueNode node);

// primitivas
void enqueue(Queue queue, void *value);
void *dequeue(Queue queue);

// get
void *getQueueItem(Queue queue, int index);
QueueNode getQueueNode(Queue queue, int index);

// functions
int getSizeQueue(Queue queue);
int getDataSizeQueue(Queue queue);