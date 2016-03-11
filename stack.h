#ifndef _Stack_H

struct Node;
typedef struct Node *ptrToNode;
typedef ptrToNode Stack;
typedef int ElementType;

int isEmpty();
Stack createStack(void);
void disposeStack(Stack s);
void makeEmpty(Stack s);
void push(ElementType x, Stack s);
ElementType top(Stack s);
void pop(Stack s);

struct Node
{
	ElementType element;
	ptrToNode next;
};

#endif _Stack_H