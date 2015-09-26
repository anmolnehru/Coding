#include<stdio.h>
//#include<stlib.h>
int main()

{
    int *arr;
    int n;
    puts("Enter size of the array");
    scanf("%d",&n);
    int temp=n;
    //printf("")
    int index;
    int ap_sum,sum=0;
    arr=(int*)malloc(n*sizeof(int));
    while(temp--)
    {
        index=n-temp-1;

        scanf("%d",&arr[index]);
      //  printf("Stored %d at location %d",arr[index],index);
        sum=sum+arr[index];
        printf("The sum so far = %d\n",sum);
        //temp--;
    }

    // store the AP sum of the actual array
    int diff;
    diff=(arr[n-1]-arr[0])/n;

    ap_sum=(n+1)*(2*arr[0]+(n)*diff);
    ap_sum/=2;


    printf("\n\nThe given sum is %d extrapolated sum is %d and element missing is %d\n",sum,ap_sum,ap_sum-sum);

}



