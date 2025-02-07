#include<iostream>
using namespace std; 

int main(){
   int n;
   cout<<"enter the number"<<endl;
   cin>>n;
   int row=1;
   while(row<=n){
      int col=row;
      while(col<=n){
         cout<<"*";
         col++;
         }
         row++;
         cout<<endl;
   }
   return 0;
}