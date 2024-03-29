#include<iostream>
using namespace std;

int merge(int a[],int s,int e){

    int mid = (e+s)/2;

    int len1 = mid+s-1;
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