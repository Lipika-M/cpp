#include<iostream>
using namespace std; 
class complex{
    int a;
    int b;
    public:
    void setdata(void){
        cout<<"enter the real part"<<endl;
        cin>>a;
        cout<<"enter the imaginary part"<<endl;
        cin>>b;
    }
    void getdata(void){
        cout<<"the required complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    void setbysum(complex o,complex p){
        a=o.a+p.a;
        b=o.b+p.b;
    }

};
int main(){
   complex c1,c2,c3;
   c1.setdata();
    c2.setdata();
    c1.getdata();
   c2.getdata();
   c3.setbysum(c1,c2);
   c3.getdata();
   return 0;
}