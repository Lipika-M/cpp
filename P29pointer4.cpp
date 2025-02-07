#include<iostream>
using namespace std; 
class shop{
    int id;
    int price;
    public:
    void setdata(){
        cout<<"enter the item id "<<endl;
        cin>>id;
        cout<<"enter the item price"<<endl;
        cin>>price;
    }
    void getdata(){
        cout<<"the item id is "<<id<<" and the price is "<<price<<endl;
    }
};
int main(){
    int size;
    cout<<"enter the size "<<endl;
    cin>>size;
   shop*ptr=new shop[size];
   shop*p=ptr; //created another pointer same as ptr
   for (int i = 0; i < size; i++)
   {
   ptr->setdata();
   ptr++;
    }
   for (int j = 0; j < size; j++)
   {
   p->getdata();
   p++;
    }
  return 0;
}