#ifndef _LIST_H

struct Node;
typedef struct Node *PtrToNode;
typedef ptrToNode List;
typedef PtrToNode Position;
typedef int ElementType;


List makeEmpty(List L);
int isEmpty(List L);
int isLast(Position p, List L);
Position find(ElementType x, List L);
Position findPrevious(ElementType x, List L);
void delete(ElementType x, List L);
void insert(ElementType x, List L, Position p);
void deleteList(List L);
Position header(List L);
Position first(List L);
Position advance(Position p);
ElementType retrieve(Position p);


struct Node
{	
	ElementType element;
	Position next;
};

List makeEmpty(List L)
{
	while(NULL != L)
	{

	}
}

int isEmpty(List L)
{
	return NULL == L->next;
}

int isLast(Position p, List L)
{
	return NULL == p->next;
}

Position find(ElementType X, List L)
{
	Position p;

	p = L->next;
	while(NULL != p && x != p->element)
	{
		p = p->next;
	}

	return p;
}

Position findPrevious(ElementType x, List L)
{
	Position p;

	p = L;
	while (NULL != p->next && x != p->next->element)
	{
		p = p->next;
	}

	return p;
}

void delete(ElementType x, List L)
{
	Position p, tmpCell;

	p = findPrevious(x, L);

	//p->next = p->next->next;
	while(!isLast(p, L))
	{
		tmpCell = p->next;
		p->next = tmpCell->next;
		free(tmpCell);
	}
}

void insert(ElementType x, List L, Position p)
{
	Position tmpCell;

	tmpCell = malloc(sizeof(struct Node));
	if (NULL == tmpCell)
		fatalerror("Out of space!");

	tmpCell->element = x;
	tmpCell->next = p ->next;
	p ->next = tmpCell;
}

void deleteList(List L)
{
	Position p, tmpCell;

	p = L->next;
	L->next = NULL;

	while (NULL != p)
	{
		tmpCell = p->next;
		free(p);
		p = tmpCell;
	}
}

Position header(List L)
{

}

Position first(List L)
{

}

//
Position advance(Position p)
{

}

//
ElementType retrieve(Position p)
{

}

#endif _LIST_H
