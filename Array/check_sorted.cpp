#include<iostream>
using namespace std;

int check(int a[]){
    int i,flag=0;
    for(i=0;i<10;i++){
        if(a[i]<a[i+1]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }

    }
    return flag;

}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={2,5,2,1,5,6,3,25,52};
    if(check(a)==1){
        cout<<"Array A is sorted";
    }
    else{
        cout<< "Array A is not sorted ";
    }
    cout<<endl;
    if(check(b)==1){
        cout<<"Array B is sorted";
    }
    else{
        cout<< "Array B is not sorted";
    }
}
