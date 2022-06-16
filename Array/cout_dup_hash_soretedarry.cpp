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
    int a[10]={3,4,5,5,6,7,7,7,9,10};
    int n=9;
    dup(a,n);
}