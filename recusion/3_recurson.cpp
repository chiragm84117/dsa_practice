
#include<iostream>
using namespace std;
void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n<<endl;
    }
}
int main(){
    int x=3;
    fun(x);
}
/*interchange krdena fun(n-1) and print statment to wo seconf face/type on recursion banjayga 
1.head recursion
2. tail resursion */

/*--------------------------------------------------------------------------------------------*/
//every recusive function can be right as recusion and vise versa
//type of recusion 
//1.tail rec.....(calling time only)  (prefer loop from this tail rec........)
//2.head rec.....(returning time only)  
//3.tree rec.....(callig more than one time)
//4.indirect rec.(calling diff function in the cycle)
//5.nested rec...(recusion as a recusion)(like fun(fun(n+11)))
/*---------------------------------------------------------------------------------------------*/
//tree rec.... example
/*#include <stdio.h>
void fun(int n){
    if(n>0)
        {
            printf("%d ",n);
            fun(n-1);
            fun(n-1);
            }
        }
int main() {
    fun(3);
    return0;
}*/
/*----------------------------------------------------------------------------------------*/\
//nested rec.. example
/*
#include <stdio.h>
int fun(int n){
    if(n>100)
    return n-10;
    else
    return fun(fun(n+11));
    }
    int main(){
        int r;
        r=fun(95);
        printf("%d\n",r);
        return0;
    }*/