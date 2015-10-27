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
	//make global??
	ll *head=(ll*)malloc(sizeof(ll));
	head->next=NULL;
	head->data=0; //so first positive element also generated randomly maybe safely inserted

	//this pointer will iterate through existing list and look to insert the node
	ll *iterator=(ll*)malloc(sizeof(ll));

	int count_down_k;
	while(count_down_k--)
	{
		int randnum=rand();
		iterator=head;
		if(iterator->data==0)
			{
				iterator->data=randnum;
				break;
			}


		int count;
		struct ll *prev;
		while(randnum >= iterator->data && iterator!=NULL)
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
		while(randnum==iterator->data)
		{
			randnum++;
			prev=iterator;
			iterator=iterator->next;
		}

		ll *new=(ll*)malloc(sizeof(ll));
		new->data=randnum;
		prev->next=new;
		new->next=iterator;


	}

	iterator=head;


	while(iterator!=NULL)
	{
		printf("%d ",iterator->data);
		iterator=iterator->next;
	}

	puts("");
}

int main(int argc, char const *argv[])
{
    int k,m;
	puts("Enter k and m");
	scanf("%d %d",&k,&m);

	random_generator(k,m);



	return 0;
}


