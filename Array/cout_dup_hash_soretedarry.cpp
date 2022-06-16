#include<iostream>
using namespace std;

int dup(int a[],int n){
    int last=a[9];
    int h[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n;i++){
        h[a[i]]++;
    }
    for(int i=0;i<last;i++){
        if(h[i]>1){
            cout<<"the no is "<<i<<" it appears "<<h[i]<<" times"<<"\n";
        }
    }
}

int main(){
    int a[10]={2,5,2,10,5,6,8,3,3,5};
    int n=9;
    dup(a,n);
}