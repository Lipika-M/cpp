#include<iostream>
using namespace std; 
class y;
class x{
    int data1;
    public:
    void invalue(int val1){
        data1=val1;
    }
    friend void swapvalue(x & ,y & );
    void getdata(){
        cout<<"the value is"<<data1<<endl;
    }

};
class y{
    int data2;
    public:
    void invalue(int val2){
        data2=val2;
    }

    void getdata(){
        cout<<"the value is"<<data2<<endl;
    }
friend void swapvalue(x &a ,y &b );
};
void swapvalue(x &a,y &b){
    int temp=a.data1;
    a.data1=b.data2;
    b.data2=temp;
}
int main(){
   x a1;
   y b1;
   a1.invalue(6);
   b1.invalue(5);
   a1.getdata();
   b1.getdata();
   swapvalue(a1,b1);
   a1.getdata();
   b1.getdata();
   return 0;
}