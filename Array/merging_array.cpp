#include<iostream>
using namespace std;

int merging(int a[],int b[]){
    int i=0,j=0,k=0,c[10];
    while(i<5 && j<5){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
    }
    // for remaning element
    for(;i<5;i++){
        c[k++]=a[i];
    }
    for(;j<5;j++){
        c[k++]=b[j];
    }
    for(int i=0;i<10;i++){
        cout<<" "<<c[i];
    }
}

int farji_merge(int a[],int b[]){
    int c[5+5];
    for(int i=0;i<5;i++){
        c[i]=a[i];
    }
    for(int i=5;i<10;i++){
        c[i]=b[i-5];
    }
    for(int i=0;i<10;i++){
        cout<<c[i];
    }
}

int main(){
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,0};
    farji_merge(a,b);
    merging(a,b);
}