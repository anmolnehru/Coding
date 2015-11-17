//interview with memsql & hurshal


/*
Given a tree represented by struct node which has a left pointer,
right pointer and a pointer s that is not initialized, please
implement link_siblings function that sets s for every node such 
that it points to the closest node to the right on the same level.
Note that a tree can be sparse, like on the example below. 
*/


              1                -> nullptr
       2      ->     3         -> nullptr
   4  ->  5   -> 6   ->  7     -> nullptr
8      ->   9     ->       10  -> nullptr

struct node
{
    node* l;
    node* r;
    node* s; //not initialized
};


// I am a given arbitrary level k;

node *prev=k_first;
node *first,*second;
while(prev!=NULL)
{
node *prev=k_first;
if(prev->l)
{
first=prev->l;
if(prev->r){
second=prev->r;
first->s=second;
}
else
prev=prev->s;
}
else if(prev->r)
{
first=prev->r;
prev=prev->s;
}
first->s=second;
else
prev=prev->s;

}
second->s=NULL:

void link_siblings(node* root)
{
root->s=NULL;

queue tree1,tree2;

//logic to finish enquing
enque(tree1,root);

sibling_recursion(tree1);
}


void sibling_recursion(queue tree1)
{

queue tree2;
while(tree1.length())
{
node* temp=deque(tree1);
prev->s=temp
enque(tree2,if(temp->left));
enque(tree2,if(temp->right));
node* prev=temp;
}
temp->s=NULL;

if(tree2.length())
sibling_recursion(tree2);
else
return;
}

//recursive call with 


}