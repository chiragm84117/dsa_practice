#include<iostream>
using namespace std;

int par(int a[],int n){
    for(int i=0;i<=n;i++){
        int no=10-a[i];
        for(int j=i+1;j<=n;j++){
            if(a[j]==no){
                cout<<"pair is "<<a[i]<<" + "<<a[j]<<"\n";
            }
        }
    }
}

int par1(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==10){
                cout<<a[i]<<" "<<a[j]<<"\n";
            }
        }
    }
}

int main(){
    int a[10]={6,3,8,10,16,7,5,2,9,14};
    int n=9;
    par(a,n);
    par1(a,n);
}