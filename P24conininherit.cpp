#include<iostream>
using namespace std; 
class base1{
    int m;
    public:
     base1(int a){
        m=a;
        getm();
    }
    void getm(){
        cout<<"the value of m is "<<m<<endl;
    }
};
class base2{
    int n;
    public:
    base2(int a){
        n=a;
        getn();
    }
    void getn(){
        cout<<"the value of n is "<<n<<endl;
    }
};
class derived: public base1,public base2{
    int p;
    public:
    derived(int q,int r,int s):base1(q),base2(r){
        p=s;
        getp();
    }
    void getp(){
        cout<<"the value of p is "<<p<<endl;
    }
};
int main(){
   derived d(2,3,4);
   return 0;
}