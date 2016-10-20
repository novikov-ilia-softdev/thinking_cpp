#include "list.h"
#include <iostream>

void createList( List* list, int size);
void printList( List* list);

int main()
{
	List list;
	createList( &list, 5);
	printList( &list);
}

void createList( List* list, int size)
{
	while( size)
	{
		List* newList = new List;
		list->i = size;
		list->next = newList;
		list = list->next;
		size--;
	}

	list->next = NULL;
	list->i = 0;

}

void printList( List* list)
{
	while( list)
	{
		std::cout << "list: " << (long)list << ", list->i: " << list->i << ", list->next: " << (long)list->next << std::endl;
		list = list->next;
	}
}
