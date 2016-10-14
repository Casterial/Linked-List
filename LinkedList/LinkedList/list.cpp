#include <cstdlib>
#include <iostream>

#include "list.h"

using namespace std;

//list ctor
List::List()
{
	//the list starts at NULL an empty set.
	head = NULL;
	curr = NULL;
	temp = NULL;
	//every new list starts with a 0 count
	cnt = 0;
}

void List::AddNode(int addData) //declaring AddNode function
{
	NodePtr n = new Node;
	n->next = NULL;
	n->data = addData;

	if (head != NULL)
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
	//increment count of nodes in list by 1
	cnt++;
	cout << "The value: " << addData << " was added.\n";
}

void List::DeleteNode(int delData) //declaring DeleteNode function
{
	NodePtr delPtr = NULL;
	temp = head;
	curr = head;
	while (curr != NULL && curr->data != delData)
	{
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL) //if the current is == NULL(empty)
	{
		cout << delData << "Was not in the list\n"; //syntex check, cannot delete what is not there.
		delete delPtr;
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;

		}
		delete delPtr;
		cnt--;
		cout << "The value " << delData << " was deleted\n";
	}
}

void List::PrintList() //declaring PrintList function
{
	curr = head;
	while (curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}


