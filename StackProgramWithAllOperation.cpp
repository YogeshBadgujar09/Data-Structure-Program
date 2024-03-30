#include<iostream>

using namespace std;

int stack[100];
int choice ;
int n ;
int top ;
int x ;
int i ;

void display();


void push(){
	
	if(top >= n-1)
	{
		cout << "stack is overflow";
	}
	else
	{
		cout << "Enter a number to add :" ;
		cin >> x;
		
		top++;
		stack[top]=x;
		display();
	}
	
}

void pop(){
	
		if(top <= -1)
	{
		cout << "stack is underflow";
	}
	else
	{
	
		top--;
		display();
		 
	}
	
}

void display(){
	
	if(top >= 0){
		
		cout << "\nThe elements in STACK :\n";
		for(int i=top ; i>=0 ;i--){
			cout << stack[i] << endl ;
		}
	}
	else{
		cout << "STACK is empty " ;
	}
}

 

int main()
{
	top = -1;
	
	cout << "Enter the Size of STACK[MAX=100] :" ;
	cin >> n ;
	
	cout << "\n\n1.PUSH\n2.POP\n3.display\n4.EXIT" ;
	
	do{
		
		cout << "\n\nEnter the Choice :" ;
		cin >> choice ;
		
		switch(choice){
			
			case 1 :
					push();
					break ;
					
			case 2 :
					pop();
					break ;
					
			case 3 :
					cout << "\nExit";
					break ;				
					
			default :
					cout << "Case Not match";
		}
		
	}
	while(choice != 4);
	
	return 0;
}