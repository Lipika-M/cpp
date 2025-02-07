#include <iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;
    static int c;

public:
    void setdata(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    void getdata()
    {
        cout << "the value of real is" << real<< endl;
        cout << "the value of imaginary is" << imaginary<< endl;
        cout<<"the count is"<<c<<endl;
        c++;
    }
};
int complex::c=1;
 int main()
{
/*complex c1;
c1.setdata(3,5);    #normal without the pointers
c1.getdata();
complex c1;
complex*ptr=&c1;  //using pointers
(*ptr).setdata(56,89);
ptr->getdata();  //arrow operator
complex*p=new complex;    //using new operator created a pointer
p->setdata(6,78);
p->getdata(); */
complex*p=new complex[2];    //using new operator created a pointer array
(p)->setdata(6,78);
(p)->getdata(); 
(p+1)->setdata(12,55);
(p+1)->getdata(); 
    return 0;
}