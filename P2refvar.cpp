#include<iostream>
using namespace std; 

int main(){
    float x=5;
   
    float &y=x;
      y=98;
   cout<<"the value of x is"<<x<< endl;
   cout<<"the value of y is"<<y<< endl;
   return 0;
}