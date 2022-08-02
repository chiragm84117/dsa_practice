#include<iostream>
using namespace std;
static int lenght;
int insert(int a[],int i,int val){
    if(lenght<=9){
        for(int j=lenght;j>=i;j--){
            a[j+1]=a[j];
        }
        lenght++;
        a[i]=val;
        for(int j=0;j<=lenght;j++){
            cout<<" "<<a[j];
        }
    }
    else{
        cout<<"error";
    }
}
int main(){
    // all this u shold take the input from the user
        int a[10]={1,2,4,5,6,7,8,9,0,9};
        lenght=9;
        int i=2;
        int val=3;
    insert(a,i,val);
}