#include<iostream>
using namespace std; 
class complex{
    int a;
    int b;
    public:
    void setdata(int n,int m){
        a=n;
        b=m;
    }
    friend complex set(complex o1,complex o2 );
    void getdata(void){
        cout<<"the required complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex set(complex o1,complex o2 ){
    complex c3;
    c3.setdata(o1.a+o2.a,o1.b+o2.b);
    return c3;

}
int main(){
   complex c1,c2,sum;
   c1.setdata(1,6);
   c1.getdata();
   c2.setdata(8,7);
   c2.getdata();
   sum=set(c1,c2);
   sum.getdata();
   return 0;
}