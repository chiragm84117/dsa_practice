#include<iostream>
using namespace std;
char addX(char s[],int p){
    int i;
    for(s[i]!='\0';i>p;i--){
       s[i+1]=s[i]; 
    }
    s[i]=='x';
    return s;

}
void removeX(char s[]){
        if (s[0]=='\0')
        {
            return;
        }
    if(s[0]!='x'){
        removeX(s+1);
    }
    else{
        int i=1;
        for(;s[i]!='\0';i++){
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        removeX(s);
    }
    
}
int main()
{
    char str[100];
    cout<<"enter"<<endl;
    cin >> str;
    removeX(str);
    cout<<str<<endl;
    addX(str,3);
    cout<<str<<endl;
}