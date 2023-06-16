#include<iostream>
#include<vector>
#include<array>
using namespace std;


bool check_dup(vector <int> h, int n){
     // go and remove zeros

    for(int i=0;i<n;i++){
        if(h[i]==0){
            for(int j=0;j<n;j++){
                h[j]=h[j+1];
                n--;
                j--;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<h[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(h[i]==h[j]){
                return true;
            }
        }  
        return false;
    }
}



void docc(vector <int> a, int n){
    // encountring the frequescy
    vector <int> h(10,0);
    for(int i=0;i<n;i++){
        h[a[i]]++;
    }
    for(int i=0;i<n;i++){
        cout<<h[i]<<" ";
    }
    if(check_dup(h,n)==true){
        cout<<"not unique";
    }
    else{
        cout<<"unique";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;i++){}
    }
}

int main(){
    vector <int> a={1,2,2,3};
    int n=a.size();
    docc(a,n);
}