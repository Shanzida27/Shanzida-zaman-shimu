
#include<bits/stdc++.h>
using namespace std;

int isPrime(int a)
{
int flag=1;
for(int i=2;i<a;i++)
{
if(a%i==0)
{
flag=0;
break;
}
}
return flag;
}

void factorial(int a)
{
int result=1;
for(int i=a;i>=1;i--)
{
result=result*i;
}
cout<<"Factorial: "<<result;
}

int main()
{
int a;
cout<<"Enter an integer value: ";
cin>>a;

if(isPrime(a))
{
factorial(a);
}
else
{
cout<<"Error! Not a Prime number.";
}
return 0;
}
