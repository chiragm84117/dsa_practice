#include<iostream>
using namespace std;

int arrange(int a[]){
    int i=0,j=9;
    while(i<j){
        while(a[i]<0){
            i++;
        }
        while (a[j]>=0)
        {
            j--;
        }
        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        
    }
    for(int r=0;r<10;r++){
    cout<<" "<<a[r];
    }
}

int main(){
    int a[10]={1,-9,4,-3,-32,1,5,9,-4,2};
    arrange(a);
}