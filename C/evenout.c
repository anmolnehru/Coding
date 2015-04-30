/* Your includes go here */
#include<stdio.h>
//#include

void evenOut(int* numbers, int numbersLength)
{
    /* Complete this function */
    int temp;
    while(numbersLength){
    temp= *numbers;
    if(temp%2==1)
    {
        temp--;
        *numbers=temp;
    }
    printf("%d ",temp);
    numbers=numbers+1;
    numbersLength--;
    }
}

void main()
{
    int l;

    while(1){
    puts("Enter length of the array");
    scanf("%d",&l);
    int *numbers,*store;
    numbers=(int *)malloc(sizeof(int)*l);
    int l_t;
    store=numbers;
    l_t=l;
    int temp;
    while(l_t)
    {
        scanf("%d",&temp);
        *numbers=temp;
        numbers++;
        l_t--;
    }
    evenOut(store,l);
    }
}
