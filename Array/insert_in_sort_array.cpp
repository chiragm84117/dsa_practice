#include<iostream>
using namespace std;

int Sinsert(int a[],int x){
    int i=4;
    while(a[i]>x){
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=x;

    for(int i=0;i<6;i++){
        cout<<" "<<a[i];
    }
}
int main(){
    int a[6]={1,2,4,5,6};
    Sinsert(a,3);
}