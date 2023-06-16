#include<iostream>
using namespace std;

int partition(int *a,int  s,int e){
    int pvoit = a[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(pvoit>=a[i]){
            count++;
        }
    }
    int povitIndex = s+count;
    swap(a[s],a[povitIndex]);

    int i=s,j=e;
    while(i<povitIndex && j>povitIndex){
        while(a[i]<=pvoit){
            i++;
        }
        while(a[j]>pvoit){
            j--;
        }
        if(i<povitIndex && j>povitIndex){
            swap(a[i++],a[j--]);
        }
    }
    return povitIndex;
}

void quickSort(int *a,int s,int e){
    if(s>=e){
        return ;
    }

    int p = partition(a,s,e);

    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main(){
    int a[5]={5,2,6,1,9};
    int n = 5;
    quickSort(a,0,n-1);
    for(int i=0; i<n; i++) 
    {
        cout << a[i] << " ";
    } cout << endl;
}