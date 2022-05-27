#include<iostream>
using namespace std;
// bool sorted(int a[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restArray=sorted(a+1,n-1);
//     return (restArray && a[0]<=a[1]);
// }

bool sort(int a[],int n){
    if(n==1){
        return 1;
    }
    else{
        bool r=sort(a+1,n-1);
        return (r && a[0]<=a[1]);
    }
}
int main(){
    int a[]={1,2,4,3};
    int ans=sort(a,5);
    if(ans == 0){
    cout<<"not sorted"<<endl;
    }
    else{
        cout<<"sorted"<<endl;
    }
}