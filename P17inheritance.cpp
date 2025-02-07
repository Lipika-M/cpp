#include<iostream>
using namespace std; 
class employee{          //base class
    public:
    int id;
    float salary;
    employee(){}
    employee(int inpid){
        id=inpid;
        salary=1000;
    }
    void getdata(){
    cout<<id<<endl;
    }
};
class programmer:employee{
    public:
    int languagecode=10;
    programmer(int inpid){
    id=inpid;

    }
};
int main(){
   employee harry(12),rohan(5);
   cout<<harry.salary<<endl;
   cout<<harry.id<<endl;
   harry.getdata();
   cout<<rohan.salary<<endl;
   programmer p1(5);
   cout<<p1.languagecode<<endl;
   return 0;
}