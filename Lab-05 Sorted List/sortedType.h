#ifndef SORTEDTYPE_H_INClUDED
#define SORTEDTYPE_H_INClUDED
const int MAX_ITEM = 5;
template <class ItemType>
class sortedType
{
private:
    /* data */
    int length;
    ItemType info[MAX_ITEM];
    int currentPos;
public:
    sortedType();
    void MakeEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType& , bool&);
    void ResetList();
    void GetNextItem(ItemType&);
};


#endif
