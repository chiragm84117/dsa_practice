#include<iostream>
using namespace std;
// m1;- method one for reversing
// m2;- method two for reversing
int m1(int a[]){
    int b[10],i,j;
    for(i=0,j=9;i<9,j>=0;i++,j--){
        b[j]=a[i];
    }
    cout<<"1st method answer"<<endl;
    for(i=0;i<10;i++){
        cout<<" "<<b[i];
    }
    cout<<endl;
}
int m2(int a[]){
    int i,j,temp=0;
    for(i=0,j=9;i<j;i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"2nd method answer"<<endl;
    for(i=0;i<10;i++){
        cout<<" "<<a[i];
    }
}
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    m1(a);
    m2(a);
}