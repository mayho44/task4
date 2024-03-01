#include <iostream>
#include <iomanip>
#include <cmath>
#include <numeric>
//#include<bits/stdc++.h>
#include <string>
#include <cassert>
using namespace std;
#define endl '\n'
//#define haha cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0);
#define ll long long
class stack{
    private:
    int size{};
    int top{};
    int *array{};
    public :
    stack(int size):
        size(size),top(-1){
            array=new int [size];
    }
    int isfull(){
        return top==size-1;
    }
    bool empty(){
    return top==-1;
    }
    void display(){
        for(int i=top;i>=0;i--)cout<<array[i];
        cout<<endl;
    }
    void push(int ele){
        if(top==size-1)return;
       array[++top]=ele;   
    }
    int pop(){
        if(top==-1);
       else return array[top--];
    }
    int peek(){
        if(top==-1);
       else  return array[top];
    }
};
void asteroid_collision(int arr[],int size){
stack stp(size),stn(size);
for(int i=0;i<size;i++){
    if(arr[i]<0){
        if(!stp.empty()){
if(stp.peek()>-arr[i])continue;
else if(stp.peek()==-arr[i]){stp.pop(),size--;continue;}
else  stp.pop(),size--,i--;
        }
        else stn.push(arr[i]);
    }
    else stp.push(arr[i]);
}
while(!stp.empty())cout<<stp.peek()<<" ",stp.pop();
while(!stn.empty())cout<<stn.peek()<<" ",stn.pop();
cout<<endl;
};
int main(){
    int arr[4] {-1,-2,1,2};
asteroid_collision(arr,4);
}