#include<iostream>
using namespace std;

void find(int a[],int l){
    int h[l]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<l;i++){
        h[a[i]]++;
    }for(int i=0;i<l;i++){
        if(h[i]==0){
            cout<<"missing no is"<<i<<"\n";
        }
    }
}

int main(){
    int a[10]={1,3,4,6,7,8,9,10};
    int l=10;
    find(a,l);
}