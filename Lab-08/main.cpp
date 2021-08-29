/*#include<iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

int prec(char c) {

    if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(string s) {

    StackType<char> st;
    string result;

    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if((c >= '0' && c <= '9'))
            result += c;


        else if(c == '(')
            st.Push('(');


        else if(c == ')') {
            while(st.Top() != '(')
            {
                result += st.Top();
                st.Pop();
            }
            st.Pop();
        }
        else {
            while(!st.IsEmpty() && prec(s[i]) <= prec(st.Top())) {
                result += st.Top();
                st.Pop();
            }
            st.Push(c);
        }
    }
    while(!st.IsEmpty()) {
        result += st.Top();
        st.Pop();
    }

    cout << result << endl;
}
 double evaluate(double a, double b, char operate){
        switch (operate) {
            case '+':
                return a + b;
            case '-':
                return b - a;
            case '*':
                return a * b;
            case '/':
                if (a == 0)
                   cout<<"error"<<endl;
                return b / a;
        }
        return 0.0;
 }
double convert(string expression) {

        StackType<double> s;
        for (int i = 0; i < expression.length(); i++) {
            char c = expression.at(i)  ;

            if (c == '*' || c == '/' ||c == '+' || c == '-') {
                double s1 = s.Top();
                s.Pop();
                double s2 = s.Top();
                s.Pop();
                double temp = evaluate(s1, s2, c);
                s.Push(temp);
            } else {
                s.Push((double) (c-'0'));
            }
        }

        double result = s.Top();
        return result;
}

int main() {

    string exp;
    cout <<"input 10 + 3 * 5 / (16 - 4)"<<endl;
    cin >> exp;
    infixToPostfix(exp);
    cout<<convert(exp)<<endl;
    return 0;
}
*/
#include <iostream>
#include"stacktype.h"
#include"stacktype.cpp"
#include <string>
using namespace std;

double
Checkoperator(double a,
double b, char ope)
{
switch(ope)
{
case '+':
return a + b;
case '-':
return a - b;

case '*':
return a * b;
case '/':
return a / b;
}
}

int precedence(char op)
{
if(op == '+'||op ==
'-')
return 1;
if(op == '*'||op ==
'/')
return 2;
return 0;
}

double Evaluate(string
s)
{

StackType <double>
values;
StackType <char>
op;

for(int i = 0; i <
s.length(); i++)
{

if(s[i] == ' ')
continue;
else if(s[i] ==
'(')
{

op.Push(s[i]);
}
else
if(isdigit(s[i]))
{
int val =
0;

while(i <
s.length() &&
isdigit(s[i]))
{
val =
(val*10) + (s[i]-'0');
i++;
}

values.Push(val);
i--;
}
else if(s[i] ==
')')
{
while(!
op.IsEmpty() &&
op.Top() != '(')
{
double
val2 = values.Top();

values.Pop();

double
val1 = values.Top();

values.Pop();

char
ope = op.Top();

op.Pop();

values.Push(Checkoperator(val1, val2, ope));
}

if(!
op.IsEmpty())

op.Pop();
}
else

{
while(!
op.IsEmpty() &&
precedence(op.Top()) >=
precedence(s[i]))
{
double
val2 = values.Top();

values.Pop();

double
val1 = values.Top();

values.Pop();

char
ope = op.Top();

op.Pop();

values.Push(Checkoperator(val1, val2, ope));
}

op.Push(s[i]);
}
}

while(!
op.IsEmpty())
{
double val2 =
values.Top();
values.Pop();

double val1 =
values.Top();
values.Pop();

char ope =
op.Top();
op.Pop();

values.Push(Checkoperator(val1, val2, ope));
}

return
values.Top();
}

int main()
{
cout << "Expected Output\n" << endl;
try
{
cout << Evaluate("10 + 3 * 5 /(16 - 4)") << endl;
}
catch(EmptyStack e)
{
cout <<
"Invalid expression" <<
endl;
}

try
{
cout <<Evaluate("(5 + 3) *12 / 3") << endl;
}
catch(EmptyStack e)
{
cout <<
"Invalid expression" <<
endl;
}

try
{
cout <<Evaluate("3 + 4 / (2 -3) * / 5") << endl;
}
catch(EmptyStack e)
{
cout <<
"Invalid expression" <<
endl;
}

try
{
cout <<
Evaluate("7 / 5 + (4 -(2) * 3") << endl;
}
catch(EmptyStack e)
{

cout <<
"Invalid expression" <<
endl;
}

return 0;
}
