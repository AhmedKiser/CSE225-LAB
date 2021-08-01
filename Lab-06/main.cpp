#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main(){
    stacktype<int> mystack;
    int x;

    if (mystack.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;

    cout << "Push 4 items(5,7,6,9)" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        mystack.Push(x);
    }
    cout << "Print "<<endl;
    while (!mystack.IsEmpty())
    {
        cout << mystack.Top() << " ";
        mystack.Pop();
    }
    cout << ""<< endl;
    cout << " Push with duplicates(2,3,3,4)"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        mystack.Push(x);
    }
    cout << "Print "<<endl;
    while (!mystack.IsEmpty())
    {
        cout << mystack.Top() << " ";
        mystack.Pop();
    }

    cout <<"Push 5 and then pop"<<endl;
    cin >> x;
    mystack.Push(x);
    mystack.Pop();
    cout <<"Push 3"<<endl;
    cin >> x;
    mystack.Push(x);
    cout <<"Push 7 and then pop"<<endl;
    cin >> x;
    mystack.Push(x);
    mystack.Pop();
    cout << "Top and print"<< endl;
    cout << mystack.Top() <<endl;

     if (mystack.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;

}
