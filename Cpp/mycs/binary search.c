//binary search using iterative method
#include<stdio.h>

int binsearch(int A[],int n, int x)
{
    int m,l=0,h=n-1;
    while(l<=h)
    {
    m=(l+h)/2;
    if(A[m]==x) return m; //Found element retruns index x
    else if(x<A[m]) h=m-1;
    else l=m+1;
    }
    return -1;
}

void main()
{
    puts("Keep entering values in sorted order which should be part pf the array");
    puts("Enter -999 to end input stream");

    //decl vars
    int t,count=0;
    int *arr,temp[10];
    while(1){
    scanf("%d",&t);
        if(t!=-999)
          {
              temp[count]=t;
              count++;

          }
          else break;
    }

          t=0;
          int n;
          n=count;
          arr=(int *)malloc(count*sizeof(int));

          while(n){
          arr[n-1]=temp[n-1];
          n--;
                }

//int arr[]={-2,-1,0,1,2,5}                ;
while(1){
puts("\n Enter the value you want to seach for");
int x=0,index=0;
scanf("%d",&x);
index=binsearch(arr,count,x);
//printf("count=%d,elements=::%d;%d;%d",count,arr[0],arr[1],arr[2]);
if(index!=-1)
printf("The value %d is at location %d",x,index);
else
printf("Element not found, would you like to insert it? [y/N]%d",index);

}
}
