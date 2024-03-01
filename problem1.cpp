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
    int added_elements{};
    int *array{};
    public :
    stack(int size):
        size(size){
            array=new int [size];
    }
    ~stack(){
        delete []array;
    }
bool push( int ele){
    if(added_elements==size)return false;
    for(int i =added_elements-1;i>=0;i--){
        array[i+1]=array[i];
    }
    array[0]=ele;
    added_elements++;
    return true;
}
bool pop(){
    if(added_elements==0)return false;
    for(int i=0;i<added_elements-1;i++){
array[i]=array[i+1];
    }
    added_elements--;
    return true;
}
};