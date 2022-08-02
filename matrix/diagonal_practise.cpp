#include<iostream>
using namespace std;

int diognal(int a[3][3]){
    int i,j,flag=0;
    for(i=0,j=0;i<3,j<3;i++,j++){
            if(i!=j){
                if(a[i][j]!=0){
                    flag=1;
                    break;
                }
            }
        }
    if(flag==1){
        cout<<"not"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
}

int main(){
    int a[3][3]={{1,0,0},{0,2,0},{0,0,3}};
    diognal(a);
}