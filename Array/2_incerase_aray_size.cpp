#include<iostream>
using namespace std;

int main(){
    int *p,*q,i;
    int a=1;
    p=new int[5];
    for(i=0;i<5;i++){
        p[i]=a;
        a++;
    }
    q=new int[10];
    for(i=0;i<5;i++){
        q[i]=p[i];
    }
    delete p;
    p=q;
    q=NULL;
    for(i=5;i<10;i++){
        p[i]=a;
        a=a+10;
    }
    for(i=0;i<10;i++){
        cout<<p[i]<<" ";
    }
}