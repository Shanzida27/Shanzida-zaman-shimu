#include<bits/stdc++.h>
using namespace std;
#define n 5
int a[5];
int top=-1;
bool isFull(){
if(top==n-1){
    return true;

}
return false;
}

void push(int data){
if(isFull()){
        cout<<"Stack overflow"<<endl;
}
else{
top++;
a[top]=data;
}
}
void printStack(){
    for(int i=top;i>=0;i--)
        cout<<a[i]<<endl;

    }

void Print(){
for(int i=top;i>=0;i--){
    cout<<a[i]<<endl;
}
cout<<endl;
}
bool isEmpty(){
if(top<0){
    return true;

}
return false;
}
int pop(){
    if(isEmpty()){
        cout<<"Empty"<<endl;
    }else{
    int value=a[top];
    top--;
    return value;
    }
}

int main(){

push(10);
push(20);
push(30);
pop();
pop();
pop();
pop();



return 0;
}
