// in this we have taken 1d array in that we only stooring the diagonal element and rest 0 we r not storing just to save the memory

#include<iostream>
using namespace std;

class class_diagonal{
    private:
        int n;
        int *a;
    public:
        class_diagonal(int n){
            this->n=n;
            a=new int[n];
        }  
    void set(int i,int j,int x); 
    int get(int i,int j);
    void display();
    ~class_diagonal(){
        delete []a;
        }     
};
void class_diagonal::set(int i,int j,int x){
    if(i==j){
        a[i-1]=x;
    }
}

int class_diagonal::get(int i,int j){
    if(i==j){
        return a[i-1];
    }
    else{
        return 0;
    }
}

void class_diagonal::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<a[i-1]<<" ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}


int main(){

    int d,x;
    cout<<"enter dimensions";
    cin>>d;
    class_diagonal dm(d);

    for( int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cin>>x;
            dm.set(i,j,x);
        }
    }
    dm.get(1,1);
    dm.display();
}