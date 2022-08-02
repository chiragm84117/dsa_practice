#include<iostream>
using namespace std;
int scan(int a[],int n){
    int last_dup=0;
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1] && last_dup!=a[i]){ // we use last_dup bcz if there r 3 similar no is it sholud not print that no 2 time as missing no.
            cout<<"element is:"<<a[i]<<"\n";        
            
        }
        last_dup=a[i];
    }
}
int count_dup(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            int j=i+1;
            while(a[i]==a[j])j++;
            cout<<"duplicate no is"<<a[i]<<" it appears "<<j-i<<" times"<<"\n";
            //YOU MAY OR NOT MAY USE IT BUT IF U USE IT COMPUTATION WILL BE MORE EFFECTIVE
            // i=j-1; // this from skiping the element which were duplicate
        }
    }
}

int main(){
    int a[10]={1,2,3,3,4,5,6,6,6,7};
    int n=8;
    scan(a,n);
    count_dup(a,n);
}