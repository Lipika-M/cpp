#include<iostream>
using namespace std; 
class student{
    protected:
    int roll;
    public:
    void setroll(int a){
       roll=a;
    }
  void getroll(){
    cout<<"the roll no. is "<<roll<<endl;
  }
};
class sub:virtual public student{
    protected:
    int maths ;
    int physics;
    public:
    void setmarks(int m,int p){
        maths=m;
        physics=p;
    }
    void getmarks(){
        cout<<"the maths marks is "<<maths<<endl;
        cout<<"the physics marks is "<<physics<<endl;
    }
};
class sport:virtual public student{
    protected:
    int test;
    public:
    void settest(int m){
        test=m;
    }
    void gettest(){
        cout<<"the test marks is "<<test<<endl;
         
    }
};
class result: public sub,public sport{
int resultm;
public:
void getresult(){
    getroll();
    getmarks();
    gettest();
    resultm=physics+maths+test;
    cout<<"the result is "<< resultm<<endl;
}
};
int main(){
   result r;
   r.setroll(1);
   r.setmarks(90,60);
   r.settest(100);
   r.getresult();
   return 0;
}