#include "people.h"
#include<iostream>
#include "birthday.h"
#include "birthday.cpp"

using namespace std;
people::people(string x, birthday bo)
:
name(x),dob(bo) //member initalizers, objects in other classes, const objects
{

}

void people::dateprint(){
cout<<name<<"was born on";
dob.printdate();
}
