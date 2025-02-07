#include<iostream>
using namespace std; 
class student{
    int rollno;
    public:
    void setroll(int);
    void getroll();
};
void student::setroll(int r){
    rollno=r;
}
void student::getroll(){
    cout<<"the roll no. is "<<rollno<<endl;
}
class marks:public student{
    protected:
    int maths;
    int physics;
    public:
    void setmark(int m,int p){
        maths=m;
        physics=p;
    };
    void getmark(){
        cout<<"Your maths marks is "<<maths<<endl;
        cout<<"Your physics marks is "<<physics<<endl;
    };
};
class result: public marks{
    float percent;
    
    public:
    
    void display(){
        getroll();
        getmark();
        percent=(maths+physics)/2;
        cout<<"Your percentage is"<<percent<<endl;
    }
};
int main(){
   result r;
   r.setroll(1);
   r.setmark(50,50);
   r.display();
   return 0;
}