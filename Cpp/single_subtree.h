//class definitions and structs for btrees
typedef struct node
{
int data;
node *left;
node *right;
}node;

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
	void destroy_tree(node *leaf ); //let's understand these
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
void BinaryTree::insert(int key, node *leaf)
{

if(key < leaf->data)
{
	if(leaf->left!=NULL)
	insert(key,leaf->left);
	else
	{
		//insert(key,leaf->right);
		leaf->left=new node;
		leaf->left->data=key;
		leaf->left->left=NULL;
		leaf->left->right=NULL;
	}
}

else
	{
		if(leaf->right!=NULL)
		insert(key,leaf->right);
		else
		{
			leaf->right=new node;
			leaf->right->data=key;
			leaf->right->left=NULL;
			leaf->right->right=NULL;
		}

	}
}

void BinaryTree::destroy_tree(node *leaf) //can be passed the root of the true, will destroy in bottom up fashion recursively
{
	if(leaf!=NULL)
	{
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}

	return;

}
