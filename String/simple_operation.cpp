#include<iostream>
using namespace std;
void length(char a[]){
    int i;
    for (i=0;a[i]!='\0';i++){

    }
    cout<<"length is "<<i<<endl;
    
}

void u_case(char a[]){
    // diff between upper and lower case in 32 ACIIE CODE
    for(int i=0;a[i]!='\0';i++){
        a[i]=a[i]-32;
    }
    cout<<a<<endl;
}

void toggle(char a[]){
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90){
            a[i]+=32;
        }
        // this values id accie code values for characters
        else if(a[i]>=97 && a[i]<=122){
            a[i]-=32;
        }
    }
    cout<<a<<endl;
}

void vowels(char a[]){
    int vcount=0,count=0;

    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='O'){
            vcount++;
        }
        else if (a[i]>=65 && a[i]<=90 && a[i]>=97 && a[i]<=122){ //to avoid space and special charaters
            count++;
        }
    }
    cout<<"no is vowels are "<<vcount<<" and the no of consonents are "<<count<<endl;
}

int main(){
    char a[]="welcome";
    length(a);
    u_case(a);
    toggle(a);

    char b[]="my name is chirag";
    vowels(b);
}