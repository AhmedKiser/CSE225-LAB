#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;
void PrintQueue(QueType<int> myQue);

int main(){
    QueType<int> myQue(5);
    int x;

    if (myQue.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
        cout << "Queue is not Empty" << endl;

    cout << "Enqueue 4 items(5,7,4,2)" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        myQue.Enqueue(x);
    }

    if (myQue.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
        cout << "Queue is not Empty" << endl;


    if (myQue.IsFull())
    {
        cout << "Queue is full" << endl;
    }
    else
        cout << "Queue is not full" << endl;

    cout << "Queue another item (6) : ";
    cin >> x;
    if (myQue.IsFull()){
        cout << "Queue overflow" << endl;
    }
    else
        myQue.Enqueue(x);
    cout <<"Print the values in the queue (in the order the values are given as input)" <<endl;
    PrintQueue(myQue);
    cout << "" <<endl;
    if (myQue.IsFull())
    {
        cout << "Queue is full" << endl;
    }
    else
        cout << "Queue is not full" << endl;
    cout << "Queue another item : ";
    cin >> x;

    if (myQue.IsFull()){
        cout << "Queue overflow" <<endl;
    }
    else
        myQue.Enqueue(x);
    cout << "" <<endl;

    cout << "Dequeue two items" <<endl;
    myQue.Dequeue(x);
    myQue.Dequeue(x);
    PrintQueue(myQue);
    cout << "" <<endl;

    myQue.Dequeue(x);
    myQue.Dequeue(x);
    myQue.Dequeue(x);
    cout << "Dequeue three items" <<endl;

    if (myQue.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
        cout << "Queue is not Empty" << endl;

    cout << "Dequeue another items" <<endl;
    try
    {

        myQue.Dequeue(x);
      throw (EmptyQueue{});

    }
    catch (EmptyQueue)
    {
        cout << "Queue Underflow";
    }
    cout << "" <<endl;


    int n ;
    cout << "Input an integer(10) : ";
    cin >> n;
    QueType<string> q;
    q.Enqueue("1");
    while (n--) {
        string s1 = "1";
        q.Dequeue(s1);
        cout << s1 << "\n";
        string s2 = s1;
        q.Enqueue(s1.append("0"));
        q.Enqueue(s2.append("1"));
    }

    return 0;

}


void PrintQueue(QueType<int> myQue)
{
    int x;
    while (!myQue.IsEmpty())
    {

        myQue.Dequeue(x);
        cout<<x<< " ";
    }
}