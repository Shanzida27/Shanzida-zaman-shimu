#include<bits/stdc++.h>
using namespace std;
int main()
{
int flag=0,i,j;

int arr[7]={1,2,4,5,3,6,9};
for(i=0;i<6;i++)
{
for(j=0;j<7;j++)
{
if(arr[i]==arr[j])
{
flag = 1;
break;
}
}
if(i==j)
{
cout<<arr[i]<<" ";
}
}
if(flag == 1)
{
cout<<" The unique Number :";
}
return 0;
}

