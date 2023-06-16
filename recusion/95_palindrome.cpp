#include<iostream>
using namespace std;

bool check(string s, int i , int j){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    i++;
    j--;
    return check(s,i,j);
}

int main(){
    string s ="abbccbba";
    cout<<check(s,0,s.length()-1);
}