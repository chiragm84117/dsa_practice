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

int main(){
    char a[]="welcome";
    length(a);
    u_case(a);
    
}