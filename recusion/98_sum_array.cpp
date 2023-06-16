#include<iostream>
using namespace std;

int sum(int a[],int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return a[0];
    }
    else{
        int remain_part = sum(a+1,size-1);
        int sum = remain_part + a[0];
        return sum;
    }
}

int main(){
    int a[5]={2,4,6,8,9};
    int size = 5;

    cout<<sum(a,size);
}