// this is for symetirc  matrix   as we kw we a[i][j]==a[j][i] so can only stroe one by using lower traingluar martix and retrive the another one
#include<iostream>
using namespace std;

class symetric_matrix{
    private:
        int n;
        int *a;
    public:
        symetric_matrix(int n){
            this->n=n;
            a=new int[n];
        }  
    void set(int i,int j,int x); 
    int get(int i,int j);
    void display();
    ~symetric_matrix(){
        delete []a;
        }
};

void symetirc_matrix::set(int i,int j,int x){
        if(i>=j){
        a[i-1]=x;
        }
}

int symetirc_matrix::get(int i,int j){
    if(i>=j){
        return a[i-1];
    }
    else{
        return a[j-1]
    }
}

void symetirc_matrix::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<a[i-1]<<" ";
            }
            else{
                cout<<a[j-1]<<" ";
            }
        }
        cout<<"\n";
    }
}

int main(){
    int d,x;
    cout<<"enter dimensions";
    cin>>d;
    symetirc_matrix dm(d);

    for( int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cin>>x;
            dm.set(i,j,x);
        }
    }
    dm.get(1,1);
    dm.display();
}
