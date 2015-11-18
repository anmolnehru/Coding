//code to remove duplicates in linked list

#include<stdlib.h>
#include<stdio.h>

//structure for the ll
typedef struct Node{
	int data;
	struct Node* next;
} Node;

void remove_duplicates(Node *head);


#include<stdio.h>
int main()
{
	Node *current=(Node *)malloc(sizeof(Node));
	Node *head;

	Node *prev;
	current->next=NULL;
	head=current;

	puts("Keep entering elements for your list. Enter -1 to terminate");

	int temp;
	scanf("%d",&temp);

	while(temp!=-1)
	{

		prev=current;
		current=(Node *)malloc(sizeof(Node));
		prev->next=current;

		//current node updation
		current->data=temp;
		current->next=NULL;
		printf("Added another element succesfully\n");
		scanf("%d",&temp);
	}

	printf("Before remove_duplicates the output is\n");

	Node *print;
	print=head;
	while(print!=NULL)
	{
		printf("%d->",print->data);
		print=print->next;
	}

	//return 0;
    //pause();
    getchar();
    return 0;

    printf("IN the final stages of the loop \n");

	remove_duplicates(head);


	printf("Processing...\n");

	printf("After remove_duplicates the output is\n");


	print=head;
	while(print!=NULL)
	{
		printf("%d->",print->data);
		print=print->next;
	}


}


void remove_duplicates(Node *head)
{
    printf("Enter the remove_duplicates routine \n");

Node *iter;
iter=head;
while(iter->next!=NULL)
{
    printf("Loopomg");
    int	current_data=iter->data;
	Node *temp_head;
	temp_head=iter;
    Node* prev=temp_head;
	while(temp_head->next!=NULL)
	{
	    printf("Loopomg1");
		if(current_data==temp_head->data){
			prev->next=temp_head->next;
			free(temp_head);
			printf("Deleted something\n");
		}
		prev=temp_head;
        temp_head=temp_head->next;
			//free(temp_head);
			//short_circuit(temp_head);
	}
	iter=iter->next;
}

}

//void short_circuit(Node *input)
