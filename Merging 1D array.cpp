
#include<bits/stdc++.h>
using namespace std;
int s=0;
int main()
{
int a[5]={10,20,30,40,50};
int b[8]={1,2,3,4,5,6,7,8};
int merged[13];

for(int i=0;i<5;i++)
{
merged[s]=a[i];
s++;

}
for(int i=0;i<8;i++)
{
merged[s]=b[i];
s++;
}

for(int i=0;i<13;i++)
{
cout<<merged[i]<<" ";
}

cout<<endl;

for(int i=12;i>=0;i--)
{
cout<<merged[i]<<" ";
}

return 0;
}
