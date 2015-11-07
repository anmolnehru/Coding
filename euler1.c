#include<stdio.h>
void main()
{
int n;
n=0;
double sum=0;
while(n<1000)
{
if(n%3==0 | n%5==0)
sum=sum+n;
n++;
}

printf("%f",sum);
}
