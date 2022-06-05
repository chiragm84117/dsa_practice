#include<iostream>
using namespace std;
int k=0;
int unionn(int a[],int b[]){
    int c[10],i=0,j=0;
    while(i<5 && j<5){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else if(a[i]==b[j]){
            c[k++]=a[i++];
            j++;
        }
    }
    for(;i<5;i++){
        c[k++]=a[i];
    }
    for(;j<5;j++){
        c[k++]=b[j];
    }
    for(i=0;i<k;i++){
        cout<<" "<<c[i];
    }
}

// // not working properly
// int unionn1(int a[],int b[]){
//     int c[10],flag=0;
//     for(int i=0;i<5;i++){
//         c[i]=a[i];
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             int k=5;
//             if(a[i]==b[j]){
//                 //flag=1;
//                 break;
//             }
//             else if(j==4){
//                 //flag=0;
//                 c[k]=b[j];
//                 k++;
//             }
//         }
        
//     }
//     for(int i=0;i<;i++){
//         cout<<"\n"<<" "<<c[i];
//     }
// }

int intersection1(int a[],int b[]){
    int c[10],i=0,j=0,r=0;
    while(i<5 && j<5){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else if(a[i]==b[j]){
            c[r++]=a[i++];
        }
    }

    cout<<"\n";
    for(i=0;i<r;i++){
        cout<<" "<<c[i];
    }
} 

int intersection(int a[],int b[]){
    int c[10],r=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i]==b[j]){
                c[r]=a[i];
                r++;
            }
            else{
                
            }
        }
    }
    cout<<"\n";
    for(int i=0;i<r;i++){
        cout<<" "<<c[i];
    }
}

int difference(int a[],int b[]){
    int c[10],i=0,j=0,r=0;
    while(i<5 && j<5){
        if(a[i]<b[j]){
            c[r++]=a[i++];
        }
        else if(a[i]>b[j]){
            j++;
        }
        else if(a[i]=b[j]){
            j++;
            i++;
        }
    }

    for(;i<5;i++){
        c[r++]=a[i];
    }
    for(;j<5;j++){
        c[r++]=b[j];
    }
    cout<<"\n";
    for(int i=0;i<r;i++){
        cout<<" "<<c[i];
    }
}

int main(){
    int a[5]={1,2,7,8,9};
    int b[5]={3,4,5,9,10};
    unionn(a,b);
    ///unionn1(a,b);
    intersection(a,b);
    intersection1(a,b);
    difference(a,b);
}