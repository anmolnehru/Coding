#include<iostream>
using namespace std;

void printnumber (int a);
void printnumber (float b);

int main()
{

int a = 3;
float b= 5.1416;

int i;
do{
cin>>i;
if(i==1)
printnumber(a);
else
printnumber(b);
}while(1);
return 0;
}

void printnumber(int a)
{

    cout<<"the number you entered is "<<a<<endl;
}


void printnumber(float a)
{

    cout<<"the number you entered is "<<a<<endl;
}


