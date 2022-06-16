#include<iostream>
using namespace std;

int hpar(int a[],int n){
    int h[n]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n-1;i++){
        h[a[i]]++;
        if(h[10-a[i]]!=0){
            cout<<a[i]<<" "<<10-a[i]<<"\n";
        }
    }
}

int main(){
    int a[10]={6,3,8,10,16,7,5,2,9,14};
    int n=9;
    hpar(a,n);
}