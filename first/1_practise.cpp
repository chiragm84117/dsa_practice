/*#include<iostream>
using namespace std;
bool check (int x, int y, int z)
{
  int a,b,c;
  a = max (x, max (z, y));
  if (a == x)
    {
      b = y;
      c = z;
    }
  else if (a == y)
    {
      b = x;
      c = z;
    }
  else
    {
      b = x;
      c = y;
    }
  if (a * a == ((b * b) + (c * c)))
    return true;
  else
    return false;
}

int main ()
{
  int x,y,z;;
  cin >> x>>y>>z;
  if (check (x, y, z))
    {
      cout << "yes";
    }
  else
    {
      cout << "no";
    }
}
*/
//----------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
/*int binarytodecimal(int n){
    int r=n;
    while(r>0){
        if(r%10==1 || r%10==0){
          int x=1;
          int ans=0;
        while(n>0){
            int y=n%10;
            ans+=x*y;
            x=x*2;
            n=n/10;
        }
        r=r/10;
        
        return ans;
        }
        else{
            char d;
            cout<<"not a binary no"<<endl;
            break;
        }   
    }
}  

int main(){
    int n;
    n=101;
    cout<< binarytodecimal(n) <<endl;
    
}*/

/*#include<bits/stdc++.h>
using namespace std;
int hextodecimal(string n){
  int ans=0;
  int x=1;
  int s=n.size();
  for(int i=s-1;i>=0;i--){
    if(n[1]>='0' && n[i]<='9'){
      ans +=x*(n[i]-'0');
    }
    else if (n[i]>='A' && n[i]<='F'){
      ans +=x*(n[i]-'A'+10);

    }
    x=x*16;
    
  }
  return ans;
}
int32_t main(){
    string n ;
    cin>>n;
    cout<<hextodecimal(n)<<endl;
}
*/
/*#include<bits/stdc++.h>
using namespace std;
int hextodecimal(string n){
  int ans=0;
  int x=1;
  int s=n.size();
  for(int i=s-1;i>=0;i--){
    if(n[i]>='1' && n[i]<='9'){
      ans+=x*(n[i]-'0');
    }
    else if(n[i]>='A' && n[i]<='F'){
      ans+=x*(n[i]-'A'+10);
    }
    x*=16;
  }
  return ans;
}
int main(){
  string n;
  cin>>n;
  cout<<hextodecimal(n)<<endl;
}
*/
/*#include<bits/stdc++.h>
using namespace std;0
void dectobin(int n){
  int binaryno[100];
  int i=0;
  while(n>0){
    binaryno[i]=n%2;
    n/=2;
    i++;
  }
  for(int j=i-1;j>=0;j--){
    cout<<binaryno[j];
  }
}
int main(){
  int n;
  cin>>n;
  dectobin(n);
}*/

/*#include<bits/stdc++.h>
using namespace std;
void dectohex(int n){
  int x=0;
  char hec[100];
  int i=0;
  while(n!=0){
    //int x=0;
    x=n%16;
    if(x<10){
    hec[i]=x+48;
    }
    else{
      hec[i]=x+55;
    }
    i++;
    n/=16;

  }
  for(int j=i-1;j>=0;j--){
    cout<<hec[j];
  }
}
int main(){
  int n;
  cin>>n;
  dectohex(n);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
  int ans=0;
  while(n>=0){
    int last=n%10;
    ans=ans*10+last;
    n/=10;
  }
  return ans;
}
int binaryadd(int a,int b){
  int ans=0;
  int carry=0;
  while(a>0 && b>0){

    if(a%2==0 && b%2==0){
      ans=ans*10+carry;
      carry=0;
    }
    else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
      if(carry==1){
      ans=ans*10+0;
      carry=1;
      }
      else{
        ans=ans*10+1;
        carry=0;
      }
    }
    else{
      ans=ans*10+carry;
      carry=1;
    }
    a/=10;
    b/=10;
  }
  while(a>0){
    if(carry==1){
      if(a%2==1){
        ans=ans*10+0;
        carry=1;
      }
      else{
        ans=ans*10+1;
        carry=0;
      }
    }
    else{
      ans=ans*10+(a%2);
    }
    a/=10;
  }
  while(b>0){
    if(carry==1){
      if(b%2==1){
        ans=ans*10+0;
        carry=1;
      }
      else{
        ans=ans*10+1;
        carry=0;
      }
    }
    else{
      ans=ans*10+(b%2);
    }

    b/=10;
  }
  if(carry==1){
    ans=ans*10+1;
  }
  ans=reverse(ans);

  return ans;
}

int main(){
  int a,b;
  cin>>a>>b;
  cout<<binaryadd(a,b);
}*/
/*#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
  int ans=0;
  while(n>0){
  int last=n%10;
  ans=ans*10+last;
  n/=10;
  }
  return ans;
}
int binaryadd(int a,int b){
  int ans=0;
  int carry=0;
  while(a>0 && b>0){
    if(a%2==0 && b%2==0){
      ans=ans*10+carry;
      carry=0;
    }
    else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0)){
      if(carry==1){
        ans=ans*10+0;
        carry=1;
      }
      else{
        ans=ans*10+1;
        carry=0;
      }
    }
    else{
      ans=ans*10+carry;
      carry=1;
    }
    a/=10;
    b/=10;
  }
  while(a>0){
    if(carry==1){
      if(a%2==1){
        ans=ans*10+0;
        carry=1;
      }
      else{
        ans=ans*10+1;
        carry=0;
      }
    }
    else{
      ans=ans*10+(a%2);
    }
    a/=10;
  }
  while(b>0){
    if(carry==1){
      if(b%2==1){
        ans=ans*10+0;
        carry=1;
      }
      else{
        ans=ans*10+1;
        carry=0;
      }
    }
    else{
      ans=ans*10+(b%2);
    }
    b/=10;
  }
  if(carry==1){
    ans=ans*10+1;
  }
  ans=reverse(ans);
  return ans;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<binaryadd(a,b);
}*/
/*
int btd(int n){
  int ans=0;
  int x=1;
  while(n>0){
    int y=n%10;
    if(y==1||y==0){
    ans+=x*y;
    x*=2;
    n/=10;
    }
    else{
      return 0;
      
    }
  }
  return ans;
}
int main(){
  int n;
  cin>>n;
  int q=btd(n);
  if(q!=0){
    cout<<q<<endl;
  }
  else{
    cout<<"not"<<endl;
  }

}*/