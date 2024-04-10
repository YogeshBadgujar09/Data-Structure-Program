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
	else
	{
		last->next = temp;
		last = temp ;
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
	
	while(true)
	{
		int ch;
		
		cout << "\n\n****MENU****";		
		cout << "\n1.Create Node \n2.Display Node";
		cout << "\n\nEnter your Choice :";
		cin >> ch;
		
		switch(ch)
		{
			case 1 :
			l.create();
			break;
			
			case 2 :
			l.display();
			break;
		}
	}
	
	
	
	return 0;
}