#include<iostream>
using namespace std;

int count_way(int nstairs){
    if(nstairs<0){
        return 0;
    }
    if(nstairs==0){
        return 1;
    }
    return count_way(nstairs-1)+count_way(nstairs-2);
}

int main(){
    cout<<count_way(3);
}