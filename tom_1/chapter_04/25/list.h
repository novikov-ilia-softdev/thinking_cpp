#ifndef LIST_H
#define LIST_H

struct List{
	int i;
	List* next;

	void createList( int size);
	void printList();
};

#endif // LIST_H
