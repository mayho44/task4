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
    char *array{};
    public :
    stack(int size):
        size(size),top(-1){
            array=new char [size];
    }
    int isfull(){
        return top==size-1;
    }
    bool isempty(){
    return top==-1;
    }
    void display(){
        for(int i=top;i>=0;i--)cout<<array[i]<<" ";
        cout<<endl;
    }
    void push(char ele){
        if(top==size-1)return;
       array[++top]=ele;   
    }
    char pop(){
        if(top==-1);
       else return array[top--];
    }
    char peek(){
        if(top==-1);
       else  return array[top];
    }
};
bool isValid(string str){
stack st(str.length());
  stack current(str.length());
    for(int i=0;i<str.length();i++){
      if(str[i]==']'){
         if(!current.isempty()){
            if('['==current.peek()){
               current.pop();
               //reversed.pop();
               continue;}
             return false;
         }
         return false;
      }
       else if(str[i]=='}'){
         if(!current.isempty()){
            if('{'==current.peek()){
               current.pop();
               continue;}
             return false;
         }
         return false;
      }
      else  if(str[i]==')'){
         if(!current.isempty()){
            if('('==current.peek()){
               current.pop();
               continue;}
             return false;
         }
         return false;
      }
      else current.push(str[i]);
    }
    if(current.isempty())return true;
    else return false;
};
int main(){
cout<<isValid("())");
}