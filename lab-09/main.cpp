#include <iostream>
#include "quetype.h"
#include "quetype.cpp"
using namespace std;


int main(){
    int x;
    QueType<int> que;
    if(que.IsEmpty()){
        cout << "Queue is Empty" <<endl;
    }
    else
        cout << "Queue is not Empty " <<endl;
    que.Enqueue(1);
    que.Enqueue(2);
    que.Enqueue(3);
    que.Enqueue(4);
    que.Enqueue(5);
    que.PrintQueue();
    que.Dequeue(x);
    cout << "" << endl;
    que.PrintQueue();


    return 0;
}

