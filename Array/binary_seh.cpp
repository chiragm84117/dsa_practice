#include<iostream>
using namespace std;
int bserach(int a[],int val){
    int l,h,m;
    l=0;
    h=6;
    m=(l+h)/2;
    while(l<h){
        if(val<a[m]){
            h=m-1;
            m=(l+h)/2;
        }
        else if(val>a[m]){
            l=m+1;
            m=(l+h)/2;
        }
        else if(val==a[m]){
            return m;
        }
    }
}
int main(){
    int a[7]={1,2,3,4,5,6,7};
    cout<<bserach(a,7);
}