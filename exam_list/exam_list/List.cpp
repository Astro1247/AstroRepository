#include "stdafx.h"
#include "List.h"
#include <stdlib.h>
#include "iostream"

using namespace std;

List::List()
{
	root = current = NULL;
}

int List::insert(int place, int value)
{
	if (place < 0 || place > count) return 0;
	_list *ptr;
	ptr = new _list;
	ptr = root;
	//ptr->element = value;
	_list *newelem = (_list*)malloc(sizeof(_list));
	newelem->element = value;
	for (int i = 1; i < place; i++)
	{
		if (i != place-1)
		{
			ptr = ptr->next;
		}
		else
		{
			newelem->next = ptr->next;
			ptr->next = newelem;
			//newelem->next = ptr;
			newelem->prev = ptr;
			//ptr->next = newelem;
			//ptr->prev = newelem;
			newelem->next->prev = newelem;
		}
	}
}



int List::add(int got)
{
	_list *work = (_list*)malloc(sizeof(_list));
	if (!work) return 0;
	if (!root)
	{
		root = work;
		root->prev = NULL;
	}
	else
	{
		if (!current)
			current = root;
		current->next = work;
		work->prev = current;
		work->next = NULL;
	}
	work->element = got;
	current = work;
	++count;
	return 1;
}

int List::set(int place, int value)
{
	if (place < 0 || place > count) return 0;
	_list *ptr;
	ptr = new _list;
	ptr = root;
	for (int i = 0; i < place-1; i++)
	{
		if (i == place) break;
		ptr = root;
		ptr = ptr->next;
	}
	ptr->element = value;
	/*current = root;
	int k = 0;
	while (current)
	{
		if (k == place - 1) break;
		current = current->next;
	}
	current->element = value;*/
	return 1;
}

List::~List()
{
}
