#include<iostream>
using namespace std;

struct good_diagonal
{
    
    int A[10];
    int n;
};

// this for setting the value where i and j are equal
void set(struct good_diagonal *m,int i,int j,int x){
    if(i==j){
        m->A[i-1]=x;
    }
}
// this is to get the value of any location required
int get(struct good_diagonal m,int i,int j){
    if(i==j)
        return m.A[i-1];
    else
        return 0;    
}
// display
void display(struct good_diagonal m){
    for(int i=1;i<=m.n;i++){
        for(int j=1;j<=m.n;j++){
            if(i==j){
                cout<<m.A[i-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}

int main(){
    good_diagonal m;
    m.n=4;
    set(&m,1,1,5);set(&m,2,2,8);set(&m,3,3,9),set(&m,4,4,12);
    display(m);

    cout<<get(m,2,2);
}