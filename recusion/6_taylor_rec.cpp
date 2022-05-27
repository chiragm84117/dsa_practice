#include<iostream>
using namespace std;
//first approch
double e(int x,int n){
    static double p=1,f=1;
    //p=numretor
    //f=denominator
    double r;//store
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

double e3(int x ,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
//2nd approch
double e1(int x,int n){
    static double s=1;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e1(x,n-1);
}
int main(){
    int x=4,n=15;
    cout<<e(x,n)<<endl;
    cout<<e1(x,n)<<endl;
    cout<<"ee" <<e3(x,n)<<endl;   
}