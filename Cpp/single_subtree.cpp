#include <iostream>
#include "single_subtree.h"
//code to return the number of single-sub-trees in a tree.
// A single sub tree is a tree with all equal values


/*struct node
{
	int data;
	node *left;
	node *right;
}node;
*/
int main()
{

cout<<"enter elements to be part of the tree"<<endl;
cout<<"enter '#' to terminate accepting input"<<endl;

//special case needed for the root?
//int input;
//cin>>

int &count;  //should remain consistent across function calls

while(1)
{
	int input;
	cin>>input;
	if(input=='#')
		break;
	else
		insert(input); //basically insert logic creates a bst

}

int final_count=is_single_subtree(node,count);

cout<<"The number of subtrees are="<<final_count<<endl;

}

int is_single_subtree(node* node, int &count)
{
	if(node->left==NULL&&node->right=NULL) //reached leaf - is a single sub tree
	{
		count++; //increments count by 1
	}

	else if(node->value=node->left->value && node->value==node->right->value && is_single_subtree(node->left) && is_single_subtree(node->right))
		count++; //should increment count by 1 if a single sub tree

}