#include<iostream>
using namespace std;

void sortArray(int a[],int size){
    if(size == 0 || size == 1){
        return ;
    }
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    sortArray(a,size-1);
}

int main(){
    int a[5] = {2,5,1,56,3};
    int size = 5;
    sortArray(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}