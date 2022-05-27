#include<iostream>
using namespace std;
int first_occ(int a[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return first_occ(a,n,i+1,key);
}
int last_occ(int a[],int n,int i,int key){
    if(i==0){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return last_occ(a,n,i-1,key);
}

int last(int a[],int n ,int i ,int key){
    if(i==0){
        return -1;

    }
    if (a[i]==key){
        return i;
    }
    return last(a,n,i+1,key);
}

int main(){
    int a[]={1,2,3,4,2,5,2};
    cout<<first_occ(a,7,0,2)+1<<endl;
    cout<<last_occ(a,7,7,2)+1<<endl;
    cout<<last(a,7,7,4)+1<<endl;
}