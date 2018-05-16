#include <stdio.h>
#include <stdlib.h>
  
/********************************************************
 * CODE INSTRUCTIONS:                                   *
 * 1) The function findInOrderSuccessor you're asked    *
 *    to implement is located at line 27.               *
 * 2) Use the helper code below to implement it.        *
 * 3) In a nutshell, the helper code allows you to      *
 *    to build a Binary Search Tree.                    *
 * 4) Jump to line 102 to see an example for how the    *
 *    helper code is used to test findInOrderSuccessor. *
 ********************************************************/


// A binary tree node has a key, pointer to left
// child and a pointer to right child
typedef struct node node;   
struct node
{
  int key;
  node *left;
  node *right;
  node *parent;
};
 
node *findInOrderSuccessor(node *inputNode)
{
  // your code goes here
  if(inputNode->right)
  {
    node *temp = inputNode->right;
    while(temp->left)
    {
      temp=temp->left;
    }
    return temp;
  }
  else
  {
    node *t = inputNode->parent;
    while(t)
    {
      if(t->key > inputNode->key)
        return t;
      else
        t=t->parent;
    }
    return NULL;
  }
  
  
}

// Helper function that allocates a new node 
node* newNode(int key)
{
  node* n = (node*) malloc(sizeof(node));
  n->key   = key;
  n->left   = NULL;
  n->right  = NULL;
  n->parent = NULL;
   
  return(n);
}
 
//  Given a binary search tree and a number, inserts a new node with
//  the given number in the correct place in the tree. Returns the new
//  root pointer which the caller should then use 
node *insert(node *root, int key)
{
  // 1) If the tree is empty, return a new single node
  if (root == NULL)
  {
    return(newNode(key));
  }

  node *temp;

  // 2) Otherwise, recur down the tree
  if (key < root->key)
  {
       temp = insert(root->left, key);
       root->left  = temp;
       temp->parent= root;
  }
  else
  {
      temp = insert(root->right, key);
      root->right = temp;
      temp->parent = root;
  }

  // Return the (unchanged) node pointer
  return root;
}

// Return a pointer to a node in the BST by its key.
// Use this fuction when you need a node to test your 
// findInOrderSuccessor function on
node *getNodeByKey(node *root, int key) 
{
  node *currentNode = root;
  
  while(currentNode) {
    if(key == currentNode->key) {
      return currentNode;
    }
    
    if(key < currentNode->key) {
      currentNode = currentNode->left;
    }
    else {
      currentNode = currentNode->right;
    }
  }

  return NULL; 
}
  
/*********************************************
 * Driver program to test above function     *
 *********************************************/ 
 
int main()
{
  node *root = NULL, *test, *succ;
 
  // Create a Binary Search Tree
  root = insert(root, 20);
  root = insert(root, 9);
  root = insert(root, 25);
  root = insert(root, 5);
  root = insert(root, 12);
  root = insert(root, 11);  
  root = insert(root, 14);

  // Get a pointer to the node whose key is 9
  test = getNodeByKey(root, 12);

  // Find the in order successor of test
  succ =  findInOrderSuccessor(test);

  // Print the key of the successor node
  if(succ !=  NULL)
    printf("\n Inorder Successor of %d is %d\n", test->key, succ->key);
  else
    printf("\n Inorder Successor doesn't exit\n");
 
  return 0;
}