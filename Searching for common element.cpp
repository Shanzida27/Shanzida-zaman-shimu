#include<bits/stdc++.h>
using namespace std;
int main()
{
int m,n,l=0;
int a[7]={8,1,5,6,3,6,9};
int b[7]={4,5,3,7,1,2,6};
int c[7];

for(int i=0;i<7;i++)
{
for(int j=0;j<7;j++)
if(a[i]==b[j])
{
c[l]=b[j];
l++;
}
}
if(l==0)
{
cout<<"No common element!";
}
else
{
for(int i=0;i<l;i++)
{
cout<<c[i]<<" ";
}
}
return 0;
}

