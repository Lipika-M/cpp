#include<iostream>
using namespace std; 
class number{
    int n;
    public:
    void show(){
        cout<<"the entered integer is"<<n<<endl;
        }
    number(){}
    number(int m){
        n=m;
    }
    number(number &obj){
        n=obj.n;
        cout<<"copy constructor called !!!"<<endl;
    }
    };
int main(){ 
   number n1(2),n2(n1),n3;
   n3=n1;
     
    n1.show();
    n2.show();
    n3.show();
   return 0;
}