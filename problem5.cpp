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
    bool empty(){
    return top==-1;
    }
    void display(){
        for(int i=top;i>=0;i--)cout<<array[i];
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
  string reverse_subwords(string line){
stack st(line.length());
string ans;
for(int i=0;i<=line.length();i++){
    if(i==line.length()||line[i]==' '){
while(!st.empty()){
ans+=st.peek();
st.pop();
}
ans+=" ";
    }
else st.push(line[i]);
}
return ans;
};
string remove_all_adjacent_duplicates(string s){
 stack st(s.length());
for(int i=0;i<s.length();i++){
        if(!st.empty()&&st.peek()==s[i]){
            st.pop();continue;}
    st.push(s[i]);
}
string ans;
while(!st.empty()){ans+=st.peek(),st.pop();}
return reverse_subwords(ans);
};
int main(){
cout<<remove_all_adjacent_duplicates("abbaca");
}