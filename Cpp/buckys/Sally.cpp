#include "Sally.h"
#include <iostream>
using namespace std;
/*
int main(){
    Sally salobj;
    salobj.printshiz();
    return 1;};
    */
Sally::Sally(int a, int b)
: regVar(a),constVar(b)

{
}

void Sally::printsal(){
cout<<"reg var is "<<regVar<<endl;}

void Sally::printshiz(){
    cout<<"Hare Krsna"<<endl;
    }


void Sally::print2() const{
cout<<"I am constant great"<<endl;}
