#include<iostream>
using namespace std; 
class shop{
   private:
   int itemid[100];
   int itemprice[100];
   int counter=0;
    
   public:
     void setdata(void);
     //void initcounter(){counter=0;}  #you can use this also to make counter 0 for each object
     void  displaydata();
};
void shop::setdata(void){
   cout<<"enter the id of item no "<<counter+1<<endl;
   cin>>itemid[counter];
   cout<<"enter the price of item no "<<counter+1<<endl;
   cin>>itemprice[counter];
   counter++;
}
void shop::displaydata(){
   for (int i=0;i<counter;i++){
      cout<<"the price of item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
  
   }
}
int main(){
   shop dukaan;
   //dukaan.initcounter();
   dukaan.setdata();
   dukaan.setdata();
   dukaan.setdata();
   dukaan.displaydata();
   shop ab;
   //ab.initcounter();
   ab.setdata();
   ab.setdata();
   ab.setdata();
   ab.displaydata();
   return 0;
}