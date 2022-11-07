#include<bits/stdc++.h>
using namespace std;

int OddRange(int S,int A)
{
for(int i=S;i<=A;i++)
{
if(i%2!=0)
{
cout<<i<<" ";
}
}
}

int main()
{
int S,A;
cout<<"Start point  value: ";
cin>>S;
cout<<"Ending point  value: ";
cin>>A;
OddRange(S,A);

return 0;
}

