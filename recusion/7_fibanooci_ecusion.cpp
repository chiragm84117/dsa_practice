#include<iostream>
using namespace std;
//normal recusion
//excessive recusion
int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
//optimiz soln

// 1 1 2 3 5 8 13 
int F[10];
int fib2(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
         if(F[n-2]==-1) {
             F[n-2]=fib2(n-2);
         }
         if (F[n-1]==-1){
             F[n-1]=fib2(n-1);
         }
         F[n]=F[n-1]+F[n-2];
         return F[n-1]+F[n-2];
    }
}
int f[10];
int fib3(int n){
    if(n<=1){
        return n;
    }
    else{
        if(f[n-2]==-1){
            f[n-2]=fib(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=fib(n-1);
        }

        f[n]=f[n-1]+f[n-2];

        return f[n-2]+f[n-1];
    }
}
int main(){
    int n=8;
    cout<<fib(n)<<endl;
    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    cout<<fib2(n)<<endl;
    cout<<fib3(n-1)<<endl;
}