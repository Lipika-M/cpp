#include<iostream>
using namespace std; 

int main(){
   int n;
   cout<<"enter any number"<<endl;
   cin>>n;
   int count=0;
   while(n!=0){
    if (n&1){
        count++;
    }
    n=(n>>1);
   }
   cout<<"the number of 1 is "<<count<<endl;
   return 0;
}