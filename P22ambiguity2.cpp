#include<iostream>
using namespace std; 
class base{
    public:
    void show(){
        cout<<"hello"<<endl;
    }
};
class derived:public base{
    public:
    void show(){
        cout<<"hello ladies and gentlemen"<<endl;
    }
};
int main(){
   derived d;
   d.show();
   return 0;
}