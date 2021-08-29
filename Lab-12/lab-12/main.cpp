/*                            CSE225L – Data Structures and Algorithms Lab

                                            Lab 12
                                            Recursion

1. Write a recursive function that returns the nth Fibonacci number from the Fibonacci series. ==>int fib(int n);

2. Write a recursive function to find the factorial of a number.==>int factorial(int n);

3. Write a recursive function that returns the sum of the digits of an integer. ==>int sumOfDigits(int x);

4. Write a recursive function that find the minimum element in an array of integers.==>int findMin(int a[], int size);

5. Write a recursive function that converts a decimal number to binary number.==>int DecToBin(int dec);

6. Write a recursive function that find the sum of the following series.==>1 + 1/2 + 1/4 + 1/8 + ... + 1/2^n

*/



#include <iostream>
#include <math.h>
using namespace std;

int fib(int n){
    if (n == 0)
        return 0;
    else if ( n == 1)
        return 1;
    else
        return (fib(n-1)+fib(n-2));
}

int factorial(int n){
    if (n > 1)
        return n*factorial(n-1);
    else
        return 1;
}

int sumOfDigits(int x){
    if (x == 0)
        return 0;
    else
        return ((x%10)+sumOfDigits(x/10));
}

int findMin(int a[], int size){
    if(size == 1)
        return a[0];
    else
    return min(a[size-1],findMin(a,size-1));

}
int DecToBin(int dec){
    if(dec == 0)
        return 0;
    else
        return (dec%2)+10*DecToBin(dec/2);

}

double findSeries(int s){
    if(s==1)
        return 1;
    else
        return (1/pow(2,s-1))+findSeries(s-1);

}

int main()
{
    int f;
    cout << "The nth Fibonacci number from the Fibonacci series : ";
    cin >> f;
    cout <<"The number from the Fibonacci series is :"<< fib(f) << endl;


    int fact;
    cout << "find the factorial of a number. : ";
    cin >> fact;
    cout <<"factorial of a number. is :"<< factorial(fact) << endl;

    int s;
    cout << "the integer. : ";
    cin >> s;
    cout <<"the sum of the digits of an integer. :"<< sumOfDigits(s) << endl;

    int sz;
    cout << "enter the size of array :";
    cin >> sz;
    int arr[sz];
    cout << "the integer. : ";
    for (int i =0; i<sz;i++){
        cin >> arr[i];
    }

    cout <<"Minimum number :"<< findMin(arr,sz) << endl;


    int d;
    cout << "the integer. : ";
    cin >> d;
    cout <<"the binary number is  :"<< DecToBin(d) << endl;

    int series;
    cout << "position of the series ";
    cin >> series;
    cout <<"the binary number is  :"<< findSeries(series) << endl;

    return 0;
}
