 #include<iostream>
 using namespace std; 
 /*void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
 }
 */
/*void swappointer(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
 }
 */
/*void swapreference(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    }*/
int & swapreference(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return a;
    }
 int main(){
    int x,y;
    cout<<"enter the vakue of x and y"<<endl;
    cin>>x>>y;
    cout<<"the value of x is"<<x<<endl<<"the value of y is"<<y<<endl;
    swapreference(x,y)=90;
    cout<<"the value of x is"<<x<<endl<<"the value of y is"<<y<<endl;
    return 0;
 }