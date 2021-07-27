#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
const int y = 5;
template <class ItemType>
class timeStamp
{
private:
int seconds, minutes, hours;
public:
timeStamp(int seconds=0, int minutes=0, int hours=0);
bool operator==(const timeStamp& t);
bool operator!=(const timeStamp& t);
bool operator<(const timeStamp& t);
bool operator>(const timeStamp& t);
friend ostream& operator<<(ostream& out, consttimeStamp& t);
};
#endif // TIMESTAMP_H_INCLUDED