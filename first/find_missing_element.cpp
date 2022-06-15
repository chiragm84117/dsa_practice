#include<iostream>
using namespace std;
int sum(int a[],int l){
    int sum=0;
    for(int i=0;i<l;i++){
        sum=sum+a[i];
    }
    
    return sum;
}

//first basic approch
int find(int a[],int l){
    int main_ans=(l*(l+1))/2;
    int pre_ans= sum(a,l);
    //cout<<main_ans;
    //cout<<pre_ans;
    int no=main_ans-pre_ans;
    cout<<"missing no is "<<no;
}

//second approch

int find1(int a[],int l){
    //yaha pr hum us particular number ka diff nikal rahe h with there respective index and comapre kr rahe h start of the array wale no se
    //yadi to wo equal nhi h starting elemnt so hume yeh pata chal gaya ke yeh no missnig h jo ke h i mean index + the start of the array no
    //and then hum log age ke liye start to ek plus kr dege
    int start=a[0];
    cout<<"\n";
    for(int i=0;i<l;i++){
        if((a[i]-i) !=start){
            cout<<"found missing element"<<i+start<<"\n";
            start++;
        }
    }
}
int main(){
    int a[11]={1,2,3,4,5,7,8,9,10};
    int length=10;
    find(a,length);
    find1(a,length);
}