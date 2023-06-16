#include<iostream>
using namespace std;

int main(){
    int h[10]={0,1,2,4,5,0,0,0,0};
    int n=9;
   for(int i=0;i<n;i++){
        if(h[i]==0){
            for(int j=0;j<n;j++){
                h[i]=h[i+1];
                n--;
                j--;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<h[i];
    }
}

// int bsort(int a[]){
//     int i,j,temp=0;
//     for(i=0;i<10;i++){
//         for(j=0;j<10;j++){
//             if(a[i]<a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     cout<<"\n"<<"array squared shorted"<<endl;
//     for(i=0;i<10;i++){
//         cout<<" "<<a[i];
//     }
// }

// int isort(int a[]){
//     int i,j,key;
//     for(i=1;i<=10-1;i++){
//         key=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>key){
//             a[j+1]=a[j];
//             j--;     // becauee pele wala arry sorted hona chahiyee 
//         }
//         a[j+1]=key;
//     }
//     cout<<"\n"<<"array after sorted"<<endl;
//     for(i=0;i<10;i++){
//         cout<<" "<<a[i];
//     }

// }
// int ssort(int a[]){
//     for(int i=0;i<=10;i++){
//         int imin=i;
//         for(int j=i+1;j<10;j++){
//             if(a[j]<a[imin]){
//                 imin=j;
//             }
//         }
//         int temp=a[i];
//         a[i]=a[imin];
//         a[imin]=temp;
//     }
//     cout<<"array afer sorted"<<endl;
//     for(int i=0;i<10;i++){
//         cout<<a[i];
//     }
// }
// int square(int a[]){
//     int i;
//     for(i=0;i<10;i++){
//         a[i]=a[i]*a[i];
//     }
//     cout<<"array squared without shorting"<<endl;
//     for(i=0;i<10;i++){
//         cout<<" "<<a[i];
//     }
//     bsort(a);
//     isort(a);
//     ssort(a);

// }

// int main(){
//     int a[10],i;
//     cout<<"enter the array"<<endl;
//     for(i=0;i<10;i++){
//         cin>>a[i];
//     }
//     square(a);
// }