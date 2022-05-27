#include<iostream>
using namespace std;
static int ans=0;

int even(int a[],int n){
    int i=0;
    if(n==0){
        return 0;
    }
    if(a[0]%2!=0){
        return even(a+1,n-1);
    }
    else{
        ans=ans+1;
        return even(a+1,n-1);
    }
}

int main(){
    int a[]={2,4,1,4,2,4,89};
    int n=7;
    even(a,n);
    cout<<ans;
}