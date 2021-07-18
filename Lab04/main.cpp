#include<iostream>
#include"unsortedtype.h"
#include"unsortedtype.cpp"

using namespace std;

void printList(unsortedtype<int> ob1);

int main(){
    unsortedtype<int> unsort;
    int x;

    cout<<"Insert four items(5 7 6 9)"<<endl;
    for (int i = 0; i <4 ; i++)
    {
        /* code */
        cin>>x;
        unsort.insertItem(x);   
    }

    cout<<"Print the list(5 7 6 9)"<<endl;
    for (int i = 0; i < unsort.lengthIs(); i++)
    {
        /* code */
        unsort.getNextItem(x);
        cout<< x <<" ";
    }
    
    cout<<"Print the length of the list(4) : "<<unsort.lengthIs()<<endl;

    cout<<"Insert one item(1)"<<endl;
    cin>>x;
    unsort.insertItem(x);

     cout<<"Print the list(5 7 6 9 1)"<<endl;
     unsort.resetList();
    for (int i = 0; i < unsort.lengthIs(); i++)
    {
        /* code */
        unsort.getNextItem(x);
        cout<< x <<" ";
    }



    cout<<"Retrieve 4 and print whether found or not"<<endl;
    cin>>x;
    bool found;
    unsort.retrieveItem(x,found);
    if (found)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;

    cout<<"Retrieve 5 and print whether found or not"<<endl;
    cin>>x;
    found;
    unsort.retrieveItem(x,found);
    if (found)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;

    cout<<"Retrieve 9 and print whether found or not"<<endl;
    cin>>x;
    found;
    unsort.retrieveItem(x,found);
    if (found)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;

    cout<<"Retrieve 10 and print whether found or not"<<endl;
    cin>>x;
    found;
    unsort.retrieveItem(x,found);
    if (found)
    {
        cout<<"Item is found"<<endl;
    }
    else
        cout<<"Item is not found"<<endl;
    

    bool full = unsort.isFull();
    if (full)
    {
        cout<<"List is full"<<endl;
    }
    else
        cout<<"List is not full"<<endl;

    cout<<"Delete(5)"<<endl;
    cin>>x;
    unsort.deleteItem(x);

    full = unsort.isFull();
    if (full)
    {
        cout<<"List is full"<<endl;
    }
    else
        cout<<"List is not full"<<endl;

    cout<<"Delete(1)"<<endl;
    cin>>x;
    unsort.deleteItem(x);

     cout<<"Print the list( 7 6 9 )"<<endl;
    printList(unsort);

    return 0;
}

void printList(unsortedtype<int> ob1){
    int p;
    ob1.resetList();
    for(int i=0;i<ob1.lengthIs();i++){
          ob1.getNextItem(p);
          cout<<p<<" ";
     }
}