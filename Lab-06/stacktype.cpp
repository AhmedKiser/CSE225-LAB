#include "stacktype.h"

template <class ItemType>
stacktype<ItemType> :: stacktype(){
    top = -1;
}

template <class ItemType>
bool stacktype<ItemType> :: IsFull(){
    return (top == MAX_ITEMS-1);
}

template <class ItemType>
bool stacktype<ItemType> :: IsEmpty(){
    return (top == -1);
}

template <class ItemType>
void stacktype<ItemType> :: MakeEmpty(){
     top = 1;
}

template <class ItemType>
void stacktype<ItemType> :: Push(ItemType newItem){
    if (IsFull())
        throw FullStack();
    top++;
    items [top] = newItem;
}

template <class ItemType>
void stacktype<ItemType> :: Pop(){
    if (IsEmpty())
        throw EmptyStack();
    top --;
}

template <class ItemType>
ItemType stacktype<ItemType> :: Top(){
    if (IsEmpty())
        throw EmptyStack();
    return items[top];
}

// template<class ItemType>
// void stacktype<ItemType>::PrintStack()
// {
//     while (!IsEmpty())
//     {
//         cout<<Top()<<endl;
//         Pop();
//     }
// }
