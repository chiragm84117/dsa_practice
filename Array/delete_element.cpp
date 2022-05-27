#include<iostream>
using namespace std;
int delete_i(int a[],int i){
    for(int j=i;j<10;j++){
        a[j]=a[j+1];
    }
    for(int j=0;j<9;j++){
        cout<<" "<<a[j];
    }
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    for(int i=0;i<10;i++){
        cout<<" "<<a[i];
    }
    cout<<"\n";
    delete_i(a,4);
}