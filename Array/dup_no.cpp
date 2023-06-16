#include<iostream>
using namespace std;

int dup(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
    int a[10]={5,1,3,3,4,2};
    int n=6;
    cout<<dup(a,n);
}