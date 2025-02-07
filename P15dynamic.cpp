#include <iostream>
using namespace std;
class bank
{
    int principal;
    float rate;
    int year;
    float returnvalue;

public:
    bank(){};
    bank(int p, int y, float r)
    {
        principal = p;
        rate = r;
        year = y;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + rate);
        }
    }
    bank(int p, int y, int R)
    {
        principal = p;
        rate = float(R)/100;
        year = y;
        returnvalue = principal;
        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1 + rate);
        }
    }
    void show(void){
        cout<<"the amount returned for principal value "<<principal<<" is "<<returnvalue<<endl;
    }
};
int main()
{
bank b1,b2,b3;
int p,y;
float r;
 int R;
cout<<"enter the value of p, y and r "<<endl;
cin>>p>>y>>r;
 b1=bank(p,y,r);
 b1.show();
cout<<"enter the value of p, y and R "<<endl;
cin>>p>>y>>R;
 b2=bank(p,y,R);
 b2.show(); 
    return 0;
}