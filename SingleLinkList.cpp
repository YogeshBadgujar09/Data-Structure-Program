#include<iostream>

using namespace std;

class Node{
	
	public : 
	
	int info;
	Node* next;	
};

class List : public Node
{
	Node *first , *last;
	
	public :
	
	List()	
	{
		first = NULL;
		last = NULL;
	}
	
	void create();
	void insert();
	void delet();
	void display();
	void search();
};

void List :: create()
{
	Node *temp;
	temp = new Node;
	
	int n;
	cout << "Enter an Element :";
	cin >> n;
	
	temp->info = n;
	temp->next = NULL;
	
	if(first == NULL)
	{
		first = temp;
		last = first ;
	}
	else
	{
		last->next = temp;
		last = temp ;
	}
}

void List :: insert()
{
	Node *prev , *cur;
	
	prev = NULL ;
	cur = NULL ;
	
	int count = 1;
	int pos;
	int ch;
	int n;
	
	Node *temp = new Node;
	
	cout << "Enter an Element :";
	cin >> n;
	
	temp->info = n;
	temp->next = NULL;
	
	cout << "\nINSERT AS\n1.FIRSTNODE\n2.LASTNODE\n3.IN BETWEEN FIRST & LAST NODES";
	
	cout << "\nEnter Your Choice :";
	cin >> ch;
	
	switch(ch)
	{
		case 1 :
			temp->next = first;
			first = temp;
			break;
		
		case 2 :
			last->next = temp ;
			last = temp;
			break;
			
		case 3 :
			
			cout << "Enter Position :";
			cin >> pos;
			
			while(count != pos)
			{
				prev = cur;
				cur = cur->next;
				count++;					
			}
			
			if(count == pos)
			{
				prev->next = temp;
				temp->next = cur;
			}
			else
			{
				cout << "Not Able to Insert";
			}
			break;
			
	}	
}

void List :: delet()
{
	Node *prev = NULL;
	Node *cur = first;
	
	int count = 1;
	int pos;
	int ch;
	
	cout << "\n\nDELETE\n1.FIRSTNODE\n2.LASTNODE\n3.IN BETWEEN FIRST&LAST NODES";
	
	cout << "\nEnter Your Choice ";
	cin >> ch;
	
	switch(ch)
	{
		case 1 :
			if(first != last)
			{
				cout << "\nDeleted Element is" << first->info;
				first = first->next;
			}
			else
			{
				cout << "\nNot Able to Delete";
			}
		break;
		
		case 2 :
			while(cur != last)
			{
				prev = cur;
				cur = cur->next;
			}
			if(cur == last)
			{
				cout << "\nDeleted Element is" << cur->info;
				prev->next = NULL;
				last = prev;
			}
			else
			{
				cout << "\nNot Able to Delete";
			}
		break;
		
		case 3 :
			cout << "\nEnter the Position of Deletion :";
			cin >> pos;
			
			while(count != pos)
			{
				prev = cur;
				cur = cur->next;
				count++;
			}
			if(count == pos)
			{
				cout << "\nDeleted Element is :" << cur->info;
				prev->next = cur->next;
			}
			else
			{
				cout << "\nNot Able to Delete";
			}
		break;
	}
}

void List :: display()
{
	Node *temp = first ;
	if(temp == NULL)
	{
		cout << "\nList is Empty";
	}
	while(temp != NULL)
	{
		cout << temp->info;
		cout << "-->";
		temp = temp->next;
	}
	cout << "NULL";
}

void List :: search()
{
	int value;
	int pos = 0;
	bool flag = false;
	
	if(first == NULL)
	{
		cout << "List is Empty";
		return ;
	}
	
	cout << "Enter the value to be Searched :";
	cin >> value;
	
	Node *temp;
	temp = first;
	while(temp != NULL)
	{
		pos++;
		if(temp->info == value)
		{
			flag == true ;
			cout << "Element " << value <<" is Found at " << pos << " Position";
			
			return;
		}
		temp = temp->next;
	}
	
	if(!flag)
	{
		cout << "Element " << value << " Not Found in the List";
	}
}


int main()
{
	List l;	
	
	int ch;
	
	while(1)
	{
		cout <<	"\n****MENU****";
		
		cout << "\n1.CREATE\n2.INSERT\n3.DELETE\n4.SEARCH\n5.DISPLAY\n6.EXIT";
		
		cout << "\n\nEnter your Choice :";
		cin >> ch;
		
		switch(ch)
		{
			case 1:
			l.create();	
			break;
			
			case 2:
			l.insert();
			break;
			
			case 3:
			l.delet();					
			break;
			
			case 4:
			l.search();
			break;
			
			case 5:
			l.display()	;
			break;
			
			case 6:
			return 0;	
			break;
			
		}
	}
	
	return 0;
}