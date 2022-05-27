#include<iostream>
using namespace std;
//no. of call is more
int power(int m,int n){
    if(n==0)
    return 1;
    return power(m,n-1)*m;
}
//no of call is less
int ipower(int m,int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return power(m*m,n/2);
    }
    else{
        return m*power(m*m,(n-1)/2);
    }
}
int main(){
    int m=2,n=9;
    //normal soln
    cout<<power(m,n)<<endl;
    //optimisz soln
    cout<<ipower(m,n)<<endl;
}