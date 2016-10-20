#include "list.h"
#include <iostream>

void List::createList( int size)
{
	List* list = this;
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

void List::printList()
{
	List* list = this;
	while( list)
	{
		std::cout << "list: " << (long)list << ", list->i: " << list->i << ", list->next: " << (long)list->next << std::endl;
		list = list->next;
	}
}
