#include<iostream>

using namespace std;

class Stack{

    private :
        int stack[100];
        int top = -1 ;
        int no_of_Element ;
        int addElement;

    public :
        void getElement()
        {
            cout << "Enter Element Number :";
            cin >> this->no_of_Element ;
        }

        void push()
        {
            if(this->top >= this->no_of_Element)
            {
                cout << "\nStack is  overflow ";
            }
            else{
                
                this->top+=1;
                cout << "\nEnter an Element to add :" ;
                cin >> this->addElement ;

                stack[this->top] = this->addElement ;
            }
        }

        void pop()
        {
            if(this->top == -1)
            {
                cout << "\nStack is Empty";
            }
            else{
                this->top--;
            }
        }

        void display()
        {
            cout << "\nIn stack available element :\n";
            for(int i = this->top; i >= 0; i--){
                cout << stack[i] << endl;
            }
        }
};

int main()
{
    Stack stack ;
    stack.getElement();
    

    stack.push();
    stack.display();

    stack.push();
    stack.display();

    stack.push();
    stack.display();

    stack.pop();
    stack.display();
    
    stack.pop();
    stack.display();
    
    return 0;
}