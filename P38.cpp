#include<iostream>
using namespace std; 
//function template
/*template <class t>
t product(t a,t b){
    return a*b;
}*/
template <class t1,class t2>
float average(t1 a,t2 b){
    float avg= (a+b)/2.0;
    return avg;
}
int main(){
 //cout<<"the product is "<<product(5,5)<<endl;
  cout<<"the average is "<<average(5.5,5.8)<<endl;

   return 0;
}