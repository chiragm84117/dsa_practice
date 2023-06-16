#include<iostream>
using namespace std;

void merge(int *a,int s,int e){

    int mid = (e+s)/2;

    int len1 =mid-s+1;
    int len2 = e-mid;

    int* first = new int[len1];
    int* second = new int[len2];

    // filling of them

    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i]=a[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=a[mainArrayIndex++];
    }

    // merge of the
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            a[mainArrayIndex++] = first[index1++];
        }
        else{
            a[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1<len1){
        a[mainArrayIndex++] = first[index1++];
    }

    while(index2<len2){
        a[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *a,int s,int e){
    while(s>=e){
        return ;
    }

    int mid = (e+s)/2;

    mergeSort(a,s,mid);

    mergeSort(a,mid+1,e);

    merge(a,s,e);
}

int main(){
    int a[15]={5,3,6,2,6,75,2,7,258,2,7,24,97,953,65};
    int n = 15;
    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}