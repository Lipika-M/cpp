#include<iostream>
using namespace std; 
class complex;
class calculator{
public:
int sumreal(complex o1,complex o2) ;
int sumcomp(complex o1,complex o2) ;
};
class complex{
    int a;
    int b;
    public:
    void setdata(int n,int m){
        a=n;
        b=m;
    }
    //friend int calculator::sumreal(complex o1,complex o2);
    //friend int calculator::sumcomp(complex o1,complex o2);
    friend class calculator;
    void getdata(void){
        cout<<"the required complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
}; 
int calculator::sumreal(complex o1,complex o2){
    return o1.a+o2.a;
}
int calculator::sumcomp(complex o1,complex o2){
    return o1.b+o2.b;
}


int main(){
complex c1,c2;
c1.setdata(4,5);
c2.setdata(5,542);
c1.getdata();
c2.getdata();
calculator cal1;
int s= cal1.sumreal(c1,c2);
cout<<"the sum of real part of complex nos are "<< s <<endl;
cout<<"the sum of complex part of complex nos are "<< cal1.sumcomp(c1,c2) <<endl;

   return 0;
}