#include<iostream>
using namespace std;

int display(int a[3][3]){
    for(int i=0;i<3;i++){
        cout<<"\n";
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
    }
}

int diagonal(int a[3][3]){
    int i,j,flag=0;
    for(int i=0,j=0;i<3,j<3;i++,j++){
        if(i!=j){
            if(a[i][j]!=0){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"\n"<<"not a digonal matrix";
    }
    else{
        cout<<"\n"<<"its a digonal matrix";
    }
}

int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    display(a);
    diagonal(a);
}