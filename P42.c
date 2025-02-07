#include<stdio.h>
 
int main(){
   int a,b;
   void swap(int *x,int *y);
   printf("enter a :"); 
   scanf("%d",&a);
   printf("enter b :");  
   scanf("%d",&b);
   printf("the value of a if %d and b is %d \n ",a,b);
   swap(&a,&b);
   printf("the value of a if %d and b is %d",a,b);
   return 0;
}
void swap(int *x,int *y){
   int temp;
   temp=*x;
   *(x)=*(y);
   *y=temp;
 }