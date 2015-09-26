#include<iostream>
using namespace std ;

void swap(int* , int*);

int main () {
 int a , b ;
 cout << "Enter two numbers ";
 cin >>a >> b ;
 cout << "\nOld values :  a = " << a << "\tb = " << b ;
 swap(&a , &b);
 cout << "\nNew values : a = " << a << "\tb = " << b ;
 return 0 ;
}

void swap(int *p1 , int *p2){
 int temp ;
 temp = *p1 ;
 *p1 = *p2 ;
 *p2 = temp ;
}
