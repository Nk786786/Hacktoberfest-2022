//C++ program to find prime numbers in a given range

#include <iostream>
using namespace std;

int main()
{
int a, b, i, flag;
cout << “\nEnter start value : “;
cin >> a;
cout << “\nEnter end value : ” ;
cin >> b;
cout << “\nPrime Numbers between ” << a << ” and ” << b <<” : “;
while (a < b)
{
flag = 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
cout << a << ” “;
++a;
}
cout << endl;
return 0;
}

