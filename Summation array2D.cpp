#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[4][4];
int b[4][4];
int c[4][4];
int r[4][4];

for(int i; i<4;i++)
{
for(int j=0;j<4;j++)
{
cin>>a[i][j];
}
}

for(int i; i<4;i++)
{
for(int j=0;j<4;j++)
{
cin>>b[i][j];
}
}

for(int i; i<4;i++)
{
for(int j=0;j<4;j++)
{
cin>>c[i][j];
}
}

for(int i; i<4;i++)
{
for(int j=0;j<4;j++)
{
r[i][j]=a[i][j]+b[i][j]+c[i][j];
}
}
cout<<"Summation: "<<endl;

for(int i; i<4;i++)
{
for(int j=0;j<4;j++)
{
cout<<r[i][j]<<" ";
}
}
return 0;
}



