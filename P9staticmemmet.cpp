#include<iostream>
using namespace std; 
class employee{
    int id;
    static int count;
    public:
    void setdata(void);
    void display(void);
    static void getcount(void){
        cout<<"the value of count is "<<count<<endl;
    }

};
void employee::setdata(void){
    cout<<"enter the employee id"<<endl;
    cin>>id;
    display();
    
}
void employee::display(void){
    cout<<"the employee id is "<<id<<"and count is  "<<count<<endl;
    count+=1;}
int employee::count=1;
int main(){
   employee harry,enkd,ebjb;
   harry.setdata();
   enkd.setdata();
    ebjb.setdata();
    employee::getcount();
   return 0;
}