#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *p = &a;
    cout << "the value at a is " << a << endl;
    cout << "the value at a is " << *p << endl;
    cout << "the address of a is " << &a << endl;
    cout << "the address of a is " << p << endl;
    int *x = new int(40); // new operator being used
    delete x; // delete operator
    cout << "the value at x is " << *x << endl;
    cout << "the address of x is " << x << endl;
     int *arr=new int[3];
     arr[0]=10;
*(arr+1)=20;
arr[2]=30;
delete[] arr; //delete operator in array
        cout<<"the address of arr[1] is "<<arr<<endl;
   cout<<"the address of arr[2] is "<<(arr+1)<<endl;
   cout<<"the address of arr[3] is "<<(arr+2)<<endl;
cout<<"the value of arr[1] is "<<arr[0]<<endl;
   cout<<"thevalue  of arr[2] is "<<*(arr+1)<<endl;
   cout<<"the value of arr[3] is "<<arr[2]<<endl;

    return 0;
}