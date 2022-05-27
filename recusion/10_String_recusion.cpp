#include<iostream>
using namespace std;
// int length1(char s[]){
//     if(s[0]=='\0'){
//         return 0;
//     }
//    else{
//         int smallstr= length(s+1);
//         return 1+smallstr;
//     } 
// }

int length(char s[]){
    if(s[0]=='\0'){
        return 0;
    }
    else{
        int n=length(s+1);
        return 1+n;
    }
}
int main()
{
    char str[100];
    cout<<"endter"<<endl;
    cin >> str;
    int l= length(str);
    cout<<l<<endl;
}