#include<iostream>
using namespace std;

int search(int a[],int size,int key){
    if(size == 0){
        return false;  //when to get out the loop
    }
    if(a[0] == key){
        return true;  // when to teell yes key found in the array
    }
    else{
        return search(a+1,size-1,key);  //recusive call  for rest of the remaning array 

    }
}

int main(){
    int a[]={2,4,6,8,9};
    int size = 5;
    int key = 9;
    cout<<search(a,size,key);
}