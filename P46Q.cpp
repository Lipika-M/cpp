#include<iostream>
using namespace std; 

int main(){
    int n,dig,ans=0;
   cout<<"enter any number"<<endl;
   cin>>n;
   while(n!=0){
 dig=n%10;
 if (ans>INT32_MAX||ans<INT32_MIN){return 0;}
 ans=(ans*10)+dig;
 n=n/10;
 }
   cout<<"the reversed integer is"<<ans<<endl;
   return 0;
}