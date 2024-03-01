#include <iostream>
#include <iomanip>
#include <cmath>
#include <numeric>
#include<bits/stdc++.h>
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
    int isempty(){
        return top=-1;
    }
    void display(){
        for(int i=top;i>=0;i--)cout<<array[i]<<" ";
        cout<<endl;
    }
    void push(int ele){
        if(top==size-1)return;
       array[++top]=ele;   
    }
    int pop(){
        if(top==-1)return;
        return array[top--];
    }
    int peek(){
        if(top==-1)return;
        return array[top];
    }
};
int main(){

}

