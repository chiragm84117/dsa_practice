#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
//not the right one 
double sin1(int x,int n){
    static double p=x,q=1;
    double r;//store
    if(n==0){
        return p;
    }
    else{
        r=sin1(n-2,x);
        p=-p*(x);
        q=fact(n);
        return r+p/q; 
    }
}
int pow(int x,int n){
    if(n==0)
    return 1;
    return pow(x,n-1)*x;
}
//right one
//not getting anwer
double sin(double x,int n){
    if(n==0){
        return x;
    }
    if(((n-1)/2)%2!=0){
        return sin(n-2,x)-(pow(x,n)/fact(n)); 
    }
    else{
        return sin(n-2,x)+(pow(x,n)/fact(n)); 

    }
}
int main(){
    int x=3,n=2;
    cout<<sin(x,n)<<endl;
    //cout<<pow(2,3);
}