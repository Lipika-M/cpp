#include<iostream>
using namespace std; 
class base{
    public:
    int basevar;
    virtual void getvar(){
        cout<<"enter the basevar"<<endl;
        cin>>basevar;
        cout<<"the basevar is"<<basevar<<endl;
    }
};
class derived:public base{
    public:
    int dervar;
    void getvar(){
        cout<<"enter the dervar"<<endl;
        cin>>dervar;
        cout<<"the dervar is"<<dervar<<endl;
        cout<<"the basevar is"<<basevar<<endl;
    
    }
};
int main(){
   base*baseptr;
   base b;
   derived d;
   baseptr=&d;
   baseptr->basevar=55;
   baseptr->getvar(); //now it calls getvar of derived class only with the help of virtual function
   //derived*derptr=&d;
   //derptr->getvar();
   return 0;
}