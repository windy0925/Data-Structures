#ifndef _Queue_H

struct queueRecord;
typedef struct queueRecord *Queue;
typedef int ElementType;

int isEmpty(Queue Q);
int isFull(Queue Q);
Queue createQueue(int maxElements);
void disposeQueue(Queue Q);
void makeEmpty(Queue Q);
void Enqueue(ElementType x, Queue Q);
ElementType front(Queue Q);
void dequeue(Queue Q);
ElementType frontAndDequeue(Queue Q);

struct queueRecord
{
	int Capacity;
	int Front;
	int Rear;
	int Size;
	ElementType *Array;
};

#endif _Queue_H