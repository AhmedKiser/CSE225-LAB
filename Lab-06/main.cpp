#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;


void PrintStack(stacktype<int> mystack);
bool ArePair(char opening,char closing);
bool AreParanthesesBalanced(string exp);


int main(){
    stacktype<int> mystack;
    int x;

    if (mystack.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;


    cout << "Push 4 items(5,7,4,2)" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        mystack.Push(x);
    }

    if (mystack.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;
     if (mystack.IsFull())
    {
        cout << "Stack is Full" << endl;
    }
    else
        cout << "Stack is not Full" << endl;


    cout << "push 3" <<endl;
    cin >> x;
    mystack.Push(x);

    PrintStack(mystack);
    cout << "" <<endl;
     if (mystack.IsFull())
    {
        cout << "Stack is Full" << endl;
    }
    else
        cout << "Stack is not Full" << endl;

    mystack.Pop();
    mystack.Pop();

    cout << "Top and print"<< endl;
    cout << mystack.Top() <<endl;
    string expression;
    for (int i = 0; i < 4; i++){
	cout<<"Enter an expression:  ";
	cin>>expression;
	if(AreParanthesesBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not Balanced\n";

    }
    return 0;
}


void PrintStack(stacktype<int> mystack)
{
    while (!mystack.IsEmpty())
    {
        cout<<mystack.Top()<<" " ;
        mystack.Pop();
    }
}



bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool AreParanthesesBalanced(string exp)
{

	stacktype<char> S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.Push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(S.IsEmpty() || !ArePair(S.Top(),exp[i]))
				return false;
			else
				S.Pop();
		}
	}
	return S.IsEmpty() ? true:false;
}
