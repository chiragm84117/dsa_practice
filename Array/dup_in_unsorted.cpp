#include<iostream>
#include<vector>
using namespace std;

int find(int a[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        if(a[i]!=-1){
            for(int j=i+1;j<=n;j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=-1;  // we are making it -1 bcz dup cated element is not be consider for other itration
                    //-1 is also used becz there sholud in more than 2 duplications of the number
                }
            }
        }
        if(count>1){
            cout<<"no is "<<a[i]<<"times "<<count<<"\n";
        }
    }
}

int findDuplicates(int nums[],int n) {
        // int n = nums.size();
        vector <int> hash(n,0);
        vector <int> ans;

        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<hash.size();i++){
            if(hash[i]==2){
                ans.push_back(i);
            }
        }
    return ans;
    }

int main(){
    int a[10]={3,5,3,6,2,6,3,6,3,5};
    int n=9;
    find(a,n);
    findDuplicates(int a,int n);
}