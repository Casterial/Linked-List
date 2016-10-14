#include <cstdlib>
#include "list.h"
#include <iostream>
#include <ctime>

using namespace std;
struct node
{
	int data;
	struct node *next;
};

void reverseUtil(node *curr, node *prev, node **head);

void reverse(node **head)
{
	if (!head)
		return;
	reverseUtil(*head, NULL, head);
}

void reverseUtil(node *curr, node *prev, node **head)
{
	if (!curr->next)
	{
		*head = curr;
		curr->next = prev;
		return;
	}
	node *next = curr->next;

	curr->next = prev;

	reverseUtil(next, curr, head);
}

void printlist(node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
node *newNode(int key)
{
	node *temp = new node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}
