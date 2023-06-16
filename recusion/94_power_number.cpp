#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = power(a,b/2);
    //  this is the optimzed method to all power by half and solve

    if(a%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main(){
    int a = 3;
    int b = 8;
    int ans = power(a,b);
    cout<<ans;
}