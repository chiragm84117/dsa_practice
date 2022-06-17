#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<a.at(3)<<endl;
    cout<<a.empty()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<"------------------------------------array end--------------------------------------------------"<<endl;

    vector<int> v; //iske capacity double hogeeeee jese jse element ate rahe gee 
    cout<<"capacity "<<v.capacity()<<endl; 
    cout<<"size"<<v.size()<<endl;
    v.push_back(4);
    cout<<"capacity "<<v.capacity()<<endl; 
    cout<<"size"<<v.size()<<endl;
    v.push_back(8);
    cout<<"capacity "<<v.capacity()<<endl; 
    cout<<"size"<<v.size()<<endl;
    v.push_back(9);
    cout<<"capacity "<<v.capacity()<<endl; 
    cout<<"size"<<v.size()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }

    v.pop_back();
    cout<<"after pop"<<endl;

    for(int i:v){
        cout<<i<<endl;
    }

    vector<int> b(5,2);//this mean size of vector is 5 and all r assigned to 2
    for(int i:b){
        cout<<i<<" ";
    }
    vector<int> last(b);//this mean copy is all element int last vector
    for(int i:last){
        cout<<last.at(i)<<endl;
    }

    cout<<"-------------------------------------------vector end--------------------------------------------------"<<endl;


}