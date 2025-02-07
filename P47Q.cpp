#include<iostream>
#include<math.h>
using namespace std; 

int main(){
    int n,dig,ans=0,i=0;
   cout<<"enter the number"<<endl;
   cin>>n;
    while(n!=0){
    if (n&1){
        dig=0;
        ans=(dig*pow(2,i))+ans;
    }
    else{
        dig=1;
        ans=(dig*pow(2,i))+ans;}
    i++;
    n=n>>1;
    }
    cout<<"the answer is"<<ans<<endl;
   
   return 0;
}