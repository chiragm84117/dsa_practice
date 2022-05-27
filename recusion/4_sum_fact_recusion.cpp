#include<iostream>
using namespace std;
int sum(int n){
    if (n==0){
        //zero hoga to whole no ban jaygaa 
        return 0;
    }
    else{
        //recusive function (formula use krna jada acha hoga is me)
        return sum(n-1)+n;
    }
}
//factorial using recussion
int fac(int n){
    if(n==0){
        //0!=1
        return 1;
    }
    else 
        return fac(n-1)*n;
}
//factorial using loop
int ifac(int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}
int main(){
    int n=-1;
    if(n<0){
        //if not is negative (factorialof -ive is not possible)
        cout<<"not possible"<<endl;
    }
    else{
        cout<<"sum is "<<sum(n)<<endl;;
        cout<<"factorial is(rec..) "<<fac(n)<<endl;;
        cout<<"factorial is(loop) "<<ifac(n);
    }
}