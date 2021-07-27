#include <iostream>
#include "sortedType.h"

template <class ItemType>
sortedType <ItemType> ::sortedType(){
    length = 0;
    currentPos = -1;
}

template <class ItemType>
void sortedType <ItemType> ::MakeEmpty(){
    length = 0;
}

template <class ItemType>
bool sortedType <ItemType> ::IsFull(){
    return (length == MAX_ITEM);
}

template <class ItemType>
int sortedType <ItemType> ::LengthIs(){
    return length;
}

template <class ItemType>
void sortedType<ItemType>::InsertItem(ItemType
item)
{
int location = 0;
bool moreToSearch = (location < length);
while (moreToSearch)
{
if(item > info[location])
{
location++;
moreToSearch = (location < length);
}
else if(item < info[location])
moreToSearch = false;
}
for (int index = length; index > location;
index--)
info[index] = info[index - 1];
info[location] = item;
length++;
}

template <class ItemType>
 void sortedType <ItemType> ::DeleteItem(ItemType item){
    int location = 0;
    while (item != info[location])
        location++;
    for (int index = location + 1; index < length; index++)
        info[index - 1] = info[index];
    length--;
}

template <class ItemType>
void sortedType <ItemType> ::ResetList(){
    currentPos = -1;
}

template <class ItemType>
void sortedType <ItemType> ::GetNextItem(ItemType& item){
    currentPos++;
    item = info [currentPos];
}


template <class ItemType>
void sortedType<ItemType>::RetrieveItem(ItemType&item, bool& found)
{
    int midPoint, first = 0, last = length - 1;
    bool moreToSearch = (first <= last);
    found = false;
    while (moreToSearch && !found)
    {
        midPoint = (first + last) / 2;
        if(item < info[midPoint])
        {
            last = midPoint - 1;
            moreToSearch = (first <= last);
        }
        else if(item > info[midPoint])
        {
            first = midPoint + 1;
            moreToSearch = (first <= last);
        }
        else
        {
            found = true;
            item = info[midPoint];
        }
    }
}



timeStamp::timeStamp(int seconds, int minutes, int hours) :seconds(seconds), minutes(minutes),hours(hours)
{}

bool timeStamp:: operator==( timeStamp& t)
{
    return seconds == t.seconds && minutes == t.minutes && hours == t.hours;
}

bool timeStamp:: operator!=( timeStamp& t)
{
    return !(*this == t);
}

bool timeStamp:: operator<( timeStamp& t)
{

        if(hours < t.hours)
            return true;
        else if(hours > t.hours)
            return false;
        else
        {
            if(minutes < t.minutes)
            return true;
            else if(minutes > t.minutes)
            return false;
            else
            return seconds < t.seconds;
        }
}
ostream& operator<<(ostream& out, timeStamp& t)
{
    out<<setw(2)<<setfi ll('0')<<t.seconds<<":"<<setw(2)<<setfi ll('0')<<t.minutes<<":"<<setw(2)<<setfi ll('0')<<t.hours;
    return out;
}

