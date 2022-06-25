#include<iostream>
using namespace std;

void perm(char s[],int k){
    int i;
    static char res[10];
    static int a[10]={0};
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<endl;
    }
    else{
        for(i=0;s[i]!='\0';i++){
            if(a[i]==0){
                res[k]=s[i];
                a[i]=1;
                perm(s,k+1);
                a[i]=0;
            }
        }
    }
}
int main(){
    char a[]="ABC";
    int k=0;
    perm(a,k);
}