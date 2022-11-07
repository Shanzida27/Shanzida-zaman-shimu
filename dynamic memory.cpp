//dynamic memory(stack)
#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int top;
    int *a;
    int s;
public:
    Stack(int n){
    top=-1;
    s=n;
    a= new int[n];
    }

bool isFull(){
if(top==s-1){
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

};

int main(){
    int n;
    cout<<"Enter the size of stack: "<<endl;
    cin>>n;
Stack s(n);
s.push(10);
s.push(20);
s.push(30);
s.Print();

return 0;
}


