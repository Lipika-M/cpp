#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
//constructor overloading
    complex(){     //#This is a default constructor
        a=1;
        b=3; 
    }
    complex(int m,int n){  //#This is a parametrized constructor
     a=m;
     b=n;
     }
    complex(int m){      // #This is a parametrized constructor with only one argument
     a=m;
     b=0;
     }
    /*complex(int m, int n = 23)
    { // This is a constructor with a default argument
        a = m;
        b = n;
    }*/
    void getdata(void)
    {
        cout << "the required complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(5, 7), c2(9); //Calling a constructor implicitly
    complex c3=complex(); //Calling a constructor explicitly
    c1.getdata();
    c2.getdata();
    c3.getdata();
    return 0;
}