#include<iostream>
using namespace std; 
template<class t1,class t2>  //multi parameter template
class lipi{
  t1 data1;
  t2 data2;
  public:
  lipi(t1 p,t2 q){
   data1=p;
   data2=q;
  }
  void d(){
   cout<<"the value of a is "<<data1<<endl;
   cout<<"the value of b is "<<data2<<endl;
 }
};

int main(){
   lipi <int , char> h(22,'j');
   h.d();
   return 0;
}