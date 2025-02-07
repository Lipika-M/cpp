#include <iostream>
#include <string.h>
using namespace std;
/*struct employee{
    int eid;
    int salary;
};*/
/*class employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1 );
    void getdata(void){
        cout<<"The value of a is"<<a<<endl;
        cout<<"The value of b is"<<b<<endl;
        cout<<"The value of c is"<<c<<endl;
        cout<<"The value of d is"<<d<<endl;
        cout<<"The value of e is"<<e<<endl;
    }
};
*/
class binary
{ private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void replace(void);
    void display(void);
};
    void binary::read(void)
    {
        cout << "enter any binary data" << endl;
        cin >> s;
    }
    void binary::chk_bin(void)
    {
        int i;
        for (i = 0; i < s.length(); i++)
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "enter valid binary digit " << endl;
                exit(0);
            }
        }
    }
     void binary::display(void)
    {chk_bin();
        int i;
        cout<<"Displaying your entered value"<<endl;
        for (i = 0; i < s.length(); i++){
            cout<<s.at(i);
        }
        cout<<endl;
    }
        
    void binary::replace(void){
    
        int i;
        for (i = 0; i < s.length(); i++){
            if (s.at(i) == '0'){
                s.at(i) = '1' ;
            }
            else{ 
                 ( s.at(i)) = '0';
                    }
        }
    }
        /*void employee::setdata(int a1,int b1,int c1){
            a=a1
            b=b1;
            c=c1;
        }*/
        int main()
        {
            /* struct employee harry;           // This is structure.
            harry.eid=54;
            harry.salary=546456464;
            cout<< harry.eid<<endl<<harry.salary;
            // Declaration of object named "harry"
            employee harry;
            harry.d=12;
            harry.e=16;
            harry.setdata(2,5,9);
            harry.getdata();
            */
            binary harry;
            harry.read();
            //harry.chk_bin();
            harry.display();
            harry.replace();
            harry.display();
            return 0;
        }