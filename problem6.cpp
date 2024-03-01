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
    int size2{};
    int top{};
    int top2{};
    int *array{};
    public :
    stack(int size):
        size(size), size2(size),top(-1),top2(-2){
            array=new int [size*2];
    }
    int isfull(){
        return top==size-1;
    }
    bool empty(){
    return top==-1;
    }
    void display(){
        for(int i=top;i>=0;i--)if(i%2!=0)cout<<array[i]<<" ";
        cout<<endl;
        for(int i=top2;i>=0;i--)if(i%2==0)cout<<array[i]<<" ";
    }
    void push(int id,int ele){
        if(id==1){
        if(top/2+1==size)return;
        top+=2;
        array[top]=ele; 
        size2--;
        } 
        else {
             if(top2/2+1==size)return;
        top2+=2;
        array[top2]=ele; 
        size--;
        } 
    }
    int pop(int id){
        if(id ==1){
        if(top==-1);
        else{top-=2;
        size2++;
        return array[top];}
        }
        else {
             if(top2==-2);
        else{top2-=2;
        size++;
        return array[top2];}
        }
    }
    int peek(int id){
        if(id==1){
        if(top==-1);
       else {
if(top>top2)return array[top];
else return array[top-1];
    }
     }
 else {
     if(top2==-2);
       else {
if(top<top2)return array[top2];
else return array[top2-1];
       }  
        }
    }
};
int main(){
    stack st(10);
    st.push(2,5);
    st.push(2,6);
    st.pop(2);
    st.push(2,7);
    st.push(2,9);
    st.push(1,4);
    cout<<st.peek(1)<<endl;
    cout<<st.peek(2)<<endl;
    st.push(1,6);
    st.push(1,8);
    st.push(2,3);
st.display();
}