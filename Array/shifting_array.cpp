#include<iostream>
using namespace std;
int rotating(int a[]){
    int temp=a[0];
    for(int i=0;i<6;i++){
        a[i]=a[i+1];
    }
    a[5]=temp;
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<" "<<a[i];
    }
}
int shift(int a[]){
    for(int i=0;i<6;i++){
        a[i]=a[i+1];
    }
    a[5]=0;
    for(int i=0;i<6;i++){
        cout<<" "<<a[i];
    }
}

int main(){
    int a[6]={1,2,3,4,5,6};
    shift(a);
    rotating(a);
}