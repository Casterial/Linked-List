#include <cstdlib>
#include "list.h"
#include <iostream>
#include <ctime>


using namespace std;
int start_s = clock();
int main(int argc, char** argv)
{
	//defining what each variable is.
	List LinkedList;
	int input; 
	int delInput;
	int size = LinkedList.isEmpty();

	
	cout << "Please enter 3 numbers \n";
	//list restricted to hardcoded number (3)
	for (int i = 0; i < 3; i++)
	{
		cin >> input;	//take in user input to add a number to the list(max 3)
		LinkedList.AddNode(input); //adds the input to the linkedlist
		LinkedList.PrintList();		//prints the list
	}

	size = LinkedList.isEmpty(); //bound check
	cout << "Please enter a number you want to delete\n";
	for (int i = 0; i < size; i++)
	{
		
		std::cin >> delInput; //take user input for which number they wish to delete.
		LinkedList.DeleteNode(delInput); //deleting the input in the LinkedList
		LinkedList.PrintList();			//prints the list
	}

	cout << "List is empty\n";
	
	//int stop_s = clock();
	//std::cout << "Execution Time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << std::endl;

	system("pause");
	return 0;
}