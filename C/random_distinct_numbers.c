//k random distinct integers from 0->m-1

#include "stdio.h"
#include "stdlib.h"

typedef struct  ll
{
	int data;
	struct ll *next;
}ll;

void random_generator(int k, int m)
{
	//make global??-just processing everything in this function:-

	//initializing the linked list
	ll *head=(ll*)malloc(sizeof(ll));
	head->next=NULL;
	head->data=0; //so first positive element also generated randomly maybe safely inserted

	//this pointer will iterate through existing list and look to insert the node
	ll *iterator=head;

	int count_down_k=k;

	iterator->data=rand();

	while(count_down_k--)
	{
		int randnum=rand();
		iterator=head;

		int count=0;
		ll *prev;
		while(randnum >= iterator->data && iterator->next!=NULL)
		{
			count++;
			prev=iterator;
			iterator=iterator->next;
		}

		//have to think about inserting this node
		randnum+=count; //accomodating for the holes

		if(iterator==NULL)
		{
			iterator=(ll*)malloc(sizeof(ll));
			prev->next=iterator;
			iterator->data=randnum;
			iterator->next=NULL;
		}
		//else if{

		else if(randnum==iterator->data)
			{
				while(randnum==iterator->data && iterator!=NULL)
					{
						randnum++;
						prev=iterator;
						iterator=iterator->next;
					}

					if(iterator==NULL)
						{
							iterator=(ll*)malloc(sizeof(ll));
							prev->next=iterator;
							iterator->data=randnum;
							iterator->next=NULL;
						}

					else
						{

							ll *newll=(ll*)malloc(sizeof(ll));
							newll->data=randnum;
							prev->next=newll;
							newll->next=iterator;
						}
			}

}


	//This step is to print the final k random numbers
	iterator=head;
	count_down_k=k;
	while(count_down_k--)
	{
		printf("%d ",iterator->data);
		iterator=iterator->next;
	}

	free(head);
	//free(newll);
	free(iterator);
	puts("");
}

void main(int argc, char const *argv[])
{
    int k,m;
	puts("Enter k and m");
	scanf("%d %d",&k,&m);
	random_generator(k,m);

	//return 0;
}


