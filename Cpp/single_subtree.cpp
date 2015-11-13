#include <iostream>
#include "single_subtree.h"
//code to return the number of single-sub-trees in a tree.
// A single sunodeb tree is a tree with all equal values

using namespace std;

/*struct node
{
	int data;
	node *left;
	node *right;
}node;
*/

//function prototype

bool is_single_subtree(node* node, int &count);

int main()
{

cout<<"enter elements to be part of the tree"<<endl;
cout<<"enter '#' to terminate accepting input"<<endl;

//special case needed for the root?
//int input;
//cin>>
BinaryTree ob;

int count=0;  //should remain consistent across function calls

while(1)
{
	int input;
	cin>>input;
	if(input=='#')
		break;
	else
		ob.insert(input); //basically insert logic creates a bst

}

int final_count;//=is_single_subtree(node,count);

cout<<"The number of subtrees are="<<final_count<<endl;

}

bool is_single_subtree(node* node, int &count) //returns 1 if subtree is single
{
	if(node->left==NULL&&node->right==NULL) //reached leaf - is a single sub tree
	{
		count++; //increments count by 1
		return 1;
	}

	else if(node->data=node->left->data && node->data==node->right->data && is_single_subtree(node->left,count) && is_single_subtree(node->right,count))
		{
            count++; //should increment count by 1 if a single sub tree
            return 1;
        }

}
