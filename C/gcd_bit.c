#include<stdio.h>
int GCD(int a,int b)
{
        while(b^=a^=b^=a%=b);
            return a;
}


void main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int out=GCD(n,m);
    printf("The GCD is %d \n",out);

}
