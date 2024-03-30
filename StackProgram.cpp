#include<iostream>

using namespace std ;

int main()
{
   int stack[10] = {10,20,30};
   int elements = 3 ;
   int top = elements - 1;
   
   cout << "Before Operation on stack :" << endl ;
   for(int i=elements-1  ; i>=0; i--){
   	cout << stack[i] << endl;
   }
   cout << endl ;
   
   if(top >= elements){
   		cout << "stack is overflow";
   }
   else{
   			top+=1;
   			stack[top]=100;
   }

	cout << "Array After PUSH Operation :" << endl ;
	for(int i=top ; i>=0 ; i-- ){
		cout << stack[i] << endl ;
	}
	
	cout << "\n\n POP operation :" << endl;
	
	 if(top == -1){
   		cout << "stack is underflow";
   }
   else{
   			top-=1;
   }
   
   	cout << "Array After POP Operation :" << endl ;
	for(int i=top ; i>=0 ; i-- ){
		cout << stack[i] << endl ;
	}
	 
    return 0;
}