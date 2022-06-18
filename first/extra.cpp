#include<iostream>
using namespace std;

int rotate(int a[],int n){
    int temp=a[0];
    int i;
    for(i=1;i<n;i++){
        a[i-1]=a[i];
    } 
    a[i-1]=temp;  //bcz we tooked n as 5 and array lenght if 0-4
    
}

int main(){
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<d;i++){
        rotate(a,n);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}