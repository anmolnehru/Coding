//sam microsoft windows servicing team question:-

//detect and return duplicate element in an array

#include<stdio.h>
#include<stdlib.h>


int detect(int *arr,int n)

{
	for(int i=0;i<n;i++) //0(n) solution
	{
		if(arr[abs(arr[i])]<0)
			return arr[i]; //This is the repeated element
		else
			arr[abs(arr[i])]=arr[abs(arr[i])] * -1;

	}

	return 0;
}
void main()
{
	size_t n=20;
	int array[n];
	for(size_t i=0;i<n;i++)
	{
		array[i]=rand();
	}


	int duplicate=detect(array,n);
	if(duplicate)
	printf("%d\n",duplicate);
	else
	printf("No duplicate");
}
