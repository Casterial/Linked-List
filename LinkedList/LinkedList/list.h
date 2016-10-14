#ifndef LIST_H
#define LIST_H


class List
{
private:
	typedef struct Node //creating the Node.
	{
		int data;
		Node* next;
	}* NodePtr; //NodePtr is a pointer now.

	NodePtr head;
	NodePtr curr;
	NodePtr temp;


public: //functions to acess private data
	List();
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();
	int cnt;
	int isEmpty()
	{
		return cnt; //this returns the count of the list. (Size)
	}

	

};
#endif