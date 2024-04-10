#include<iostream>

using namespace std;

class Node
{
	public :
		
		int data ;
		Node *next;
};

class List : public Node
{
	Node *first , *last;
	
	public :
	
	List()
	{
		first = NULL;
		last = NULL ;
	}
		
	void create();
	void display();
};

void List :: create()
{
	Node *temp;				// temp is pointer object , only declare , temp is work only in this scope
	temp = new Node;		// memory allocate for property of Nodes class member , with new operater
	
	int n;
	cout << "Enter an Element :";
	cin >> n;
	
	temp->data = n;			// n value is initilize in temp pointer objects property , data=n;
	temp->next = NULL;		// NULL value is initilize in temp pointer objects property , next = NULL ;
	
	if(first == NULL)
	{
		first = temp ;		// temp objects property initilize in first objects ;
		last = first ;		/* first objects property initilize in last objects , because in program 
								we have only one Node , which is first and last */
	}
}

void List :: display()
{
	Node *temp = first ;      // first is Node which is Head 
	
	
		if(temp == NULL)
		{
			cout << "Node is Empty";
		}
		
		while(temp != NULL)
		{
			cout << temp->data ;
			cout << "-->";
			temp = temp->next;
		}
	
		cout << "NULL";
	
}

int main()
{
	List l;
	
	l.create();
	l.display();
	
	return 0;
}