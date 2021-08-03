
void PrintStack(stacktype<int> mystack)
{
    while (!mystack.IsEmpty())
    {
        cout<<mystack.Top()<<" " ;
        mystack.Pop();
    }
}
