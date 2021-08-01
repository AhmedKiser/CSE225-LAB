#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

const int MAX_ITEMS = 5;
class FullStack{};
class EmptyStack{};

template <class ItemType>
class stacktype
{
private:
    int top;
    ItemType items[MAX_ITEMS];
public:
    stacktype();
    bool IsFull();
    bool IsEmpty();
    void MakeEmpty();
    void Push(ItemType);
    void Pop();
    ItemType Top();
};
#endif // STACKTYPE_H_INCLUDED

