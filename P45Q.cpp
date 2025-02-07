#include<iostream>
#include<math.h>
using namespace std; 
     

int main(){
   /* int n;
    cout<<"enter any number"<<endl;
    cin>>n;
     int digit,i=0;
   float answer=0;
    while(n!=0){
    digit=n%2;
    answer=(digit*pow(10,i))+answer;
     i++;
     n=n/2;
 }
 cout<<"the answer is "<<int(answer)<<endl;*/
 int n;
 cout<<"enter any number"<<endl;
 cin>>n;
 int dig=0,i=0,ans=0;
 while(n!=0){
    dig=n%10;
   ans=dig*pow(2,i)+ans;
    n=n/10;
    i++;
 }
  cout<<"the answer is "<<ans<<endl;

   return 0;
}