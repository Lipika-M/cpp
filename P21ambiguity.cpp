#include<iostream>
using namespace std; 
class base1{
    public:
    void wish(){
    cout<<"GOOD MORNING!!"<<endl;
    }
};
class base2{
    public:
    void wish(){
    cout<<"GOOD MORNING!! HOW ARE YOU!!"<<endl;
    }
};
class derived:public base1,public base2{
    public:
    void wish(){           //ambiguity resolved!!
        base2::wish();
    }
};
int main(){
   derived d;
   //d.wish();    #THIS WILL SHOW AMBIGUOUS since it is present in both base class
   d.wish();
   return 0;
}