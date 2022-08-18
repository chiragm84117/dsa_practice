
#include<iostream>
using namespace std;

class lower_traingluar_matirx{
    private:
        int n;
        int *a;
    public:
        lower_traingluar_matirx(int n){
            this->n=n;
            a=new int[n];
        }  
    void set(int i,int j,int x); 
    int get(int i,int j);
    void display();
    ~lower_traingluar_matirx(){
        delete []a;
        }     
};
void lower_traingluar_matirx::set(int i,int j,int x){
    if(i>=j){
        a[i*(i-1)/2+j-1]=x;
    }
}

int lower_traingluar_matirx::get(int i,int j){
    if(i>=j){
        return a[i*(i-1)/2+j-1];
    }
    else{
        return 0;
    }
}

void lower_traingluar_matirx::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<a[i*(i-1)/2+j-1]<<" ";
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
    lower_traingluar_matirx dm(d);

    for( int i=0;i<d;i++){
        for(int j=0;j<d;j++){
            cin>>x;
            dm.set(i,j,x);
        }
    }
    dm.get(1,1);
    dm.display();
}