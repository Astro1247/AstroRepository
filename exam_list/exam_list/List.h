#pragma once
#include <ostream>
#include "iostream"

using namespace std;

class List
{
public:
	int count = 0;
	struct _list
	{
		int element;
		_list *next, *prev;
	};
	_list *root, *current;
	friend std::ostream& operator <<(std::ostream &os, const List &lst)
	{
		List l;
		l.root = lst.root;
		l.current = l.root;
		while (l.current)
		{
			os << l.current->element << endl;
			l.current = l.current->next;
		}

		return os;
	}
	int insert(int place, int value);
	int set(int, int);
	int add(int);
	List();
	~List();
};

