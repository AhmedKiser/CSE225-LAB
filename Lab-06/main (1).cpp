#include <iostream>
//#include "Stack.cpp"
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main()
{
    int i,a;
    stacktype<int> ob1;
    stacktype<int> ob2;
    stacktype<int> ob3;
    cout<<"Check if the stack is empty"<<endl;
     if(ob1.IsEmpty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;
     cout<<"\nPush four items "<<endl;
     for(i=0;i<4;i++){
            cin>>a;
            ob1.Push(a);
     }
     cout<<"Check if the stack is empty"<<endl;
      if(ob1.IsEmpty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;

        cout<<"\nCheck if the stack is full"<<endl;
      if(ob1.IsFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

        cout<<"\nPrint the values in the stack"<<endl;
    ob2=ob1;
    while(!ob2.IsEmpty()){
           ob3.Push(ob2.Top());
           ob2.Pop();
     }
     while(!ob3.IsEmpty()){
           cout<<ob3.Top()<<" ";
           ob3.Pop();
     }

     cout<<"\nPush another item"<<endl;
     cin>>a;
     ob1.Push(a);
     cout<<"\nPrint the values in the stack"<<endl;
     ob2=ob1;
    while(!ob2.IsEmpty()){
           ob3.Push(ob2.Top());
           ob2.Pop();
     }
     while(!ob3.IsEmpty()){
           cout<<ob3.Top()<<" ";
           ob3.Pop();
     }
     cout<<"\n\nCheck if the stack is full"<<endl;
      if(ob1.IsFull())
        cout<<"Stack is full"<<endl;
    else
        cout<<"Stack is not full"<<endl;

       cout<<"\nPop two items"<<endl;
       ob1.Pop();
       ob1.Pop();
       cout<<"\nPrint top item"<<endl;
       cout<<ob1.Top()<<endl;
       //////////////////////////////////////////////////
       stacktype<char> ob4;
    string S;
    cout<<"Take strings of parentheses from the user as input \nand use a stack to check if the string of parentheses is balanced or not"<<endl;
    cin>>S;
    for(int i=0;i<S.length();i++){
        if(ob4.IsEmpty()&&S[i]==')'){
           ob4.Push(S[i]);
           break;
        }
        else if(S[i]=='(')
            ob4.Push(S[i]);
        else if(S[i]==')')
            ob4.Pop();
    }
    if(ob4.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
     ob4.MakeEmpty();
       cin>>S;
    for(int i=0;i<S.length();i++){
        if(ob4.IsEmpty()&&S[i]==')'){
           ob4.Push(S[i]);
           break;
        }
        else if(S[i]=='(')
            ob4.Push(S[i]);
        else if(S[i]==')')
            ob4.Pop();
    }
    if(ob4.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
     ob4.MakeEmpty();
     cin>>S;
    for(int i=0;i<S.length();i++){
        if(ob4.IsEmpty()&&S[i]==')'){
           ob4.Push(S[i]);
           break;
        }
        else if(S[i]=='(')
            ob4.Push(S[i]);
        else if(S[i]==')')
            ob4.Pop();
    }
    if(ob4.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
     ob4.MakeEmpty();
     cin>>S;
    for(int i=0;i<S.length();i++){
        if(ob4.IsEmpty()&&S[i]==')'){
           ob4.Push(S[i]);
           break;
        }
        else if(S[i]=='(')
            ob4.Push(S[i]);
        else if(S[i]==')')
            ob4.Pop();
    }
    if(ob4.IsEmpty())
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;
     ob4.MakeEmpty();
    return 0;
}
