#include<iostream>
using namespace std;

bool isSorted(int a[],int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    else{
        isSorted(a+1,size-1);
    }
}

int main(){
    int a[5]={2,4,10,8,9};
    int size = 5;
    cout<<isSorted(a,size);
}