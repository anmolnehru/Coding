//binary search recursion
#include<stdio.h>
int recbinsearch(int arr[],int l,int h,int x)
{
    //int l,h,x;
    //l=l;h=h;x=x;
    //int i=0;
    //while(i<5){printf("%d,%d \n",arr[i],i);i++;}printf("\n");
    //return 0;
    //printf("\n l=%d,h=%d",l,h);
    if(l>h)
    {
        printf("The value doesn't exist \n");
        return -1;
    }
    int mid=l+(h-l)/2;
    if(arr[mid]==x) {printf("Value found! at %d \n",mid);return 0;}
    else if(x<arr[mid])
    recbinsearch(arr,l,mid-1,x);
    else recbinsearch(arr,mid+1,h,x);
}

void main(){
int arr[]={-2,-1,0,1,2};
int x;
while(1){
scanf("%d",&x);
recbinsearch(arr,0,5,x);}
}
