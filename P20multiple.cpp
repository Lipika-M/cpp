#include<iostream>
using namespace std; 
class base1{
    protected:
    int base1int;
    public:
    void setbase1int(int n){
        base1int=n;
    } 
};
class base2{
    protected:
    int base2int;
    public:
    void setbase2int(int n){
        base2int=n;
    } 
};
class derived:public base1,public base2{
    public:
    void show(){
        cout<<"the value of base1int is"<<base1int<<endl;
        cout<<"the value of base2int is"<<base2int<<endl;
        cout<<"the value of sum is"<<base1int+base2int<<endl;
}
};

int main(){
   derived d;
   d.setbase1int(23);
   d.setbase2int(43);
   d.show();
   return 0;
}