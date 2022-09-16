#include<iostream>
#include<vector>
#include<array>
using namespace std;

int dup(vector <int> a, int n){
    vector <int> h(10,0);
    for(int i=0;i<n;i++){
        h[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(h[i]>1){
        cout<<i<<"  "<<h[i]<<endl;
        }
    }
}

int main(){
    vector <int> a={2,5,1,1,4,6,10,4,4,2};
    int n=a.size();
    dup(a,n);
}