#include <iostream>
#include "quetype.h"
#include "quetype.cpp"


//void PrintQueue(QueType<int> myQue);
void generatePrintBinary(int n);
using namespace std;
int main(){
    /* QueType<int> myQue(5);
    int x;

    if (myQue.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;

    cout << "Enqueue 4 items(5,7,4,2)" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        myQue.Enqueue(x);
    }

    if (myQue.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;


    if (myQue.IsFull())
    {
        cout << "Stack is full" << endl;
    }
    else
        cout << "Stack is not full" << endl;

    cout << "Queue another item (6) : ";
    cin >> x;
    if (myQue.IsFull()){
        cout << "Queue overflow" << endl;
    }
    else
        myQue.Enqueue(x);

    PrintQueue(myQue);
    cout << "" <<endl;
    cout << "push 3" <<endl;
    cin >> x;
    if (myQue.IsFull()){
        cout << "Queue overflow" <<endl;
    }
    else
        myQue.Enqueue(x);


    myQue.Dequeue(x);
    myQue.Dequeue(x);
    PrintQueue(myQue);
    cout << "" <<endl;

    myQue.Dequeue(x);
    myQue.Dequeue(x);
    myQue.Dequeue(x);

    if (myQue.IsEmpty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
        cout << "Stack is not Empty" << endl;


    try
    {

        myQue.Dequeue(x);
      throw (EmptyQueue{});

    }
    catch (EmptyQueue)
    {
        cout << "Queue Underflow";
    } */
    int n = 10;
   // generatePrintBinary(n);
    // Create an empty queue of strings
    QueType<string> q;

    // Enqueue the first binary number
    q.Enqueue("1");

    // This loops is like BFS of a tree with 1 as root
    // 0 as left child and 1 as right child and so on
    while (n--) {
        // print the front of queue
        string s1 = q.Peak();
        q.Dequeue(s1);
        cout << s1 << "\n";

        string s2 = s1; // Store s1 before changing it

        // Append "0" to s1 and enqueue it
        q.Enqueue(s1.append("0"));

        // Append "1" to s2 and enqueue it. Note that s2
        // contains the previous front
        q.Enqueue(s2.append("1"));
    }
    return 0;

}


/* void PrintQueue(QueType<int> myQue)
{
    int x;
    while (!myQue.IsEmpty())
    {

        myQue.Dequeue(x);
        cout<<x<< " ";
    }
}
 */
void generatePrintBinary(int n)
{
    // Create an empty queue of strings
    QueType<string> q;

    // Enqueue the first binary number
    q.Enqueue("1");

    // This loops is like BFS of a tree with 1 as root
    // 0 as left child and 1 as right child and so on
    while (n--) {
        // print the front of queue
        string s1 = q.Peak();
       // q.Dequeue(n);
        cout << s1 << "\n";

        string s2 = s1; // Store s1 before changing it

        // Append "0" to s1 and enqueue it
        q.Enqueue(s1.append("0"));

        // Append "1" to s2 and enqueue it. Note that s2
        // contains the previous front
        q.Enqueue(s2.append("1"));
    }
}

