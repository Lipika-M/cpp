#include<iostream>
using namespace std; 
int product(int a,int b){
    static int c=0;
    c+=1;
    return a*b+c;
}

int main(){
   int x,y,i;
   cout<<"enter the value of the two numbers"<<endl;
   cin>>x>>y;
   for(i=0;i<=4;i++){
   cout<<"the product is"<<product(x,y)<<endl;
   }
   return 0;
}