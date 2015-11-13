//class definitions and structs for btrees


class node
{
int data;
node *left;
node *right;
};


class BinaryTree
{


public:
	 BinaryTree(); //constructor
	~BinaryTree(); //destructor

	void insert(int key);
	node *search(int key);
	void destroy_tree();


private:

	node *root;
	void destroy_tree(node ); //let's understand these
	void insert(int key, node *leaf);
    node *search(int key, node *leaf);
};

BinaryTree::BinaryTree() //constructor
{
	root=NULL; //just initing
}

BinaryTree::~BinaryTree()
{
	destroy_tree();

}

//public version of insert function
void BinaryTree::insert(int key)
{
	if(root!=NULL)
		insert(key,root);
	else
	{
		root=new node;
		root->data=key;
		root->left=NULL;
		root->right=NULL;
	}
}

//private version of inser
void BinaryTree::insert(int key, node *node)
{

	//do a recursive insert privately

//if(!abs(root->data))

if(key<node->data)
{
	if(node->left!=NULL)
	insert(key,node->left);
	else
	{		
		//insert(key,node->right);
		node->left=new node;
		node->left->data=key;
		node->left->left=NULL;
		node->left->right=NULL;
	}
}

else
	{
		if(node->right!=NULL)
		insert(key,node->right);
		else
		{
			node->right=new node;
			node->right->data=key;
			node->right->left=NULL;
			node->right->right=NULL;
		}

	}
}

BinaryTree::destroy_tree(node *leaf) //can be passed the root of the true, will destroy in bottom up fashion recursively
{
	if(leaf!=NULL)
	{
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}

	return;

}
