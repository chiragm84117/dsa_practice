#include<iostream>
using namespace std;

int binarySearch(int a[],int s,int e,int key){
    //we need to dive the aray in 2 part and decide where to go 
    int mid = s+(e-s)/2;

    if(s>e){
        return false;  //when to get out the loop
    }
    if(a[mid] == key){
        return true;
    } 
    else if(a[mid] < key){
        return binarySearch(a,mid+1,e,key);
    }
    else{
        return binarySearch(a,s,mid-1,key);
    }
}

int main(){
    int a[] = {2,4,6,8,9};
    int size= 5;
    int key = 2;

    cout<<binarySearch(a,0,size,key);
}