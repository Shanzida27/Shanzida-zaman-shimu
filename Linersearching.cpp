
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int m[], int n, int item){
for(int i=0;i<n-1;i++){
    if(m[i]==item){
        return i;
    }
}
return -1;
}
int main(){

int n;
cin>>n;
int *a=new int [n];
//int *a=(int*)malloc(n*sizeof(n));
//int *a=(int*)calloc(n*sizeof(n));
//int a[10]={10,20,30,40,50,60,70,80,90,1};
//int a[10];
//freeopen
int item;
cout<<"Enter the elements of array: ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"your searching item is: ";
cin>>item;
int i=LinearSearch(a,10,item);
if(i==-1){cout<<"Not Found";
}
else{ cout<<item<<" Found in "<<i<<" location";}

return 0;
}
