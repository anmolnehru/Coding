#include "birthday.h"
#include<iostream>
using namespace std;
birthday::birthday(int m,int d, int y) //constructors and initilazer

{
    m=m;
    d=d;
    y=y;
}

void birthday::printdate(){
cout<<m<<"/"<<d<<"/"<<y<<endl;}
