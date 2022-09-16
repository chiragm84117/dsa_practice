#include<iostream>
#include<vector>
#include<array>
using namespace std;

int dup(vector <int> a,int n){
    int last=a[9];
    vector <int> h(10,0);
    for(int i=0;i<n;i++){
        h[a[i]]++;
    }
    for(int i=0;i<last;i++){
        if(h[i]>1){
            cout<<"the no is "<<i<<" it appears "<<h[i]<<" times"<<"\n";
        }
    }
}

int hsum(vector <int> a,int n){
    vector <int> h(10,0);
    for(int i=0;i<n;i++){
        h[a[i]]++;
        if(h[10-a[i]]!=0){
            cout<<a[i]<<" "<<10-a[i]<<endl;
        }
    }
}

int main(){
    vector <int> a ={2,5,2,10,5,6,8,3,3,5};
    int n=a.size();
    hsum(a,n);
}