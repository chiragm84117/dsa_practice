#include<iostream>
using namespace std;

void reverse(string &s,int i,int j){
    if(i>j){
        return ;
    }
    swap(s[i],s[j]);
    i++;
    j--;

    return reverse(s,i,j);
}

int main(){
    string s = "abcde";
    reverse(s,0,s.length()-1);
    cout<<s;

}