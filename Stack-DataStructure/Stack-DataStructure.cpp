#include <iostream>
using namespace std;

#define SIZE 10
class Stack {
private:
    int* arr;
    int top;
    int capacity;
public:
    Stack(int size=SIZE) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push( int value) {
        if (isFull())
        {
            cout << "Overflow\nProgram Terminated\n";
            exit(EXIT_FAILURE);
        }
        top++;
        arr[top] = value;
    }

    void pop() {
        if (isEmpty())
        {
            cout << "Underflowflow\nProgram Terminated\n";
            exit(EXIT_FAILURE);
        }
        cout << "Removing " << peek() << endl;
        top--;
    }

    int peek() {
        if (isEmpty()) {
            exit(EXIT_FAILURE);
        }
        return arr[top];
    }

    int size() {
        return top + 1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty \n";
        }
        else {
            for (int i = 0; i < size(); i++) {
                cout << arr[i] << "\t";
            }
            cout << "\n\n";

        }


    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;     
    }

    


};
int main()
{

    int Size,choice=0,value;
    cout<<"Enter the number of elements in the stack \n";
    cin >> Size;
    Stack myStack(Size);
    cout<<"*********Stack operations using array*********";
    cout<<"\n----------------------------------------------\n";
    while (choice != 4)
    {
        cout<<"Choose one from the below options...\n";
        cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit";
        cout<<"\n Enter your choice \n";
        cin>>choice;
        switch (choice)
        {

        case 1:
        {
            cout << "Enter the value you want to add in stack \t";
            cin >> value;
            myStack.push(value);
            break;
        }
        case 2:
        {
            myStack.pop();
            break;
        }
        case 3:
        {
            cout << "My Stack = \t\t";
            myStack.display();
            cout << "\n\n";
            break;
        }
        case 4:
        {
            system("cls");
            cout << "Exiting....\n";
            break;
        }
        default:
        {
            cout<<"Please Enter valid choice \n";
        }


        }

    }

    
}

