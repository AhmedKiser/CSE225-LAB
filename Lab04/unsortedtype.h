
// const int MAX_ITEMS = 5;
// template <class ItemType>
// class unsortedtype
// {
// private:
//     int length;
//     ItemType info[MAX_ITEMS];
//     int currentPos;
// public:
//     unsortedtype();
//     void makeEmpty();
//     bool isFull();
//     int lengthIs();
//     void insertItem(ItemType);
//     void deleteItem(ItemType);
//     void retrieveItem(ItemType& , bool&);
//     void getNextItem(ItemType&);
//     void resetList();

// };
#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;
template <class ItemType>
class unsortedtype
{
public :
    unsortedtype();
    void makeEmpty();
    bool isFull();
    int lengthIs();
    void insertItem(ItemType);
    void deleteItem(ItemType);
    void retrieveItem(ItemType&, bool&);
    void resetList();
    void getNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#endif