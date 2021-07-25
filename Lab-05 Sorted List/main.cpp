#include<iostream>
#include "sortedType.h"
#include "sortedType.cpp"

using namespace std;
void printList(sortedType<int> ob);
int main(){
    int a;

    sortedType<int> ob;
    cout << "Print length of the list  "<<ob.LengthIs() <<endl;

    cout<<"Insert five items(5,7,4,2,1)"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cin>>a;
       ob.InsertItem(a);
    }
    cout<<"length "<<ob.LengthIs()<<endl;

    cout<<"print the list "<<endl;
    ob.ResetList();
    for(int i=0;i<ob.LengthIs();i++){
          ob.GetNextItem(a);
          cout<<a<<" ";
    }

    cout<<"\nRetrieve 6 and print whether found"<<endl;
    bool b;
        cin>>a;
        ob.RetrieveItem(a,b);
        if(b){
            cout<<"Item is found"<<endl;
        }
        else{
           cout<<"Item is not found"<<endl;
        }

     cout<<"Retrieve 5 and print whether found"<<endl;
        cin>>a;
        ob.RetrieveItem(a,b);
        if(b){
            cout<<"Item is found"<<endl;
        }
        else{
           cout<<"Item is not found"<<endl;
        }

    cout<<" "<<endl;
    if(ob.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;
        
    cout<<"Delete 1"<<endl;
    cin>>a;
    ob.DeleteItem(a);
    if(ob.IsFull())
        cout<<"List is full"<<endl;
    else
        cout<<"List is not full"<<endl;

    cout<<"print the list "<<endl;
    ob.ResetList();
    for(int i=0;i<ob.LengthIs();i++){
          ob.GetNextItem(a);
          cout<<a<<" ";
    }


    /* 
    timeStamp sec;
    timeStamp min;
    timeStamp hour;
    
    int S,M,H;
    cout<<"Insert 5 time values in the format ssmmhh"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>> S;
        
        cin>> M;
        cin>> H;
    }

 */







    return 0;
}
