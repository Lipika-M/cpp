#include<iostream>
using namespace std; 
class cwh{     //abstract base class 
    protected:
    string title;
    int rating;
    public:
    cwh(string s,int r){
    title=s;
    rating=r;
    }
    virtual void display()=0;  // pure virtual function
};
class wordtut:public cwh{
    int words;
    public:
    wordtut(string s,int r,int w):cwh(s,r){
        words=w;
    }
    void display(){
        cout<<"the title is "<<title<<endl;
        cout<<"the rating is "<<rating<<endl;
        cout<<"the number of words is "<<words<<endl;
    }
};
class vidtut:public cwh{
    int vidlen;
    public:
    vidtut(string s,int r,int v):cwh(s,r){
        vidlen=v;
    }
   void display(){
        cout<<"the title is "<<title<<endl;
        cout<<"the rating is "<<rating<<endl;
        cout<<"the length of the video is "<<vidlen<<endl;
    }
};
int main(){
   cwh*tut[2];
   wordtut w("hello",10,900);
   vidtut v("hii",5,8766);
   tut[0]=&w;
   tut[1]=&v;
   tut[0]->display();
   tut[1]->display();
  return 0;
}