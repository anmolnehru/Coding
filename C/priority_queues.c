//priority queuescrontab 

//min heaps and ops\\

//structure of a minheap
class minheap
{
private:
	int *harr;
	size_t capacity;
	size_t heap_size;
	bool heap_type=0;
public:
	//things/methods supported by the interface
	//constructor
	minheap(size_t capacity);

	//heapify at a given index
	void heapify(size_t index);

	size_t parent(size_t i) {return (i-1)/2;} //declared here

	size_t leftchild(size_t i){return 2*i+1;}

	size_t rightchild(size_t i){return 2*i+2;}

	void decrease_key(int i, int new_val);

	int extract_min(){return harr[0];}

	void delete_key(int i); //delete key at index i

	void insert_key(int k); //insert key k

};	

minheap::minheap(int capacity)
{

	//initing all pvt data members of the class
	heap_size=0; //initing
	capacity=capacity;
	harr = new int[capacity];
}

void minheap::insert_key(int k)
{
	if(heap_size==capacity)
	{
		cout<<"\n Overflow:Couldn't insert_key\n";
		return;
	}
	else
		harr[heap_size]=k;
		heap_size++; //inserted the key and increased count, now to fix heapify
		int index=heap_size-1;
	while(harr[parent[index]]>harr[index] && index!=0) //heads to the top
	{
		swap(&harr[parent(index)],&harr[index]);
		index=parent(index);

	}

}

void minheap::delete_key(int i)
{
	
}

void minheap::minheapify(int i)
{
	int l=leftchild(i);
	int r=rightchild(i);

	//find min
	int min;

	if(harr[l]<harr[i])
		min=l;
	else
		min=i;
	if(harr[r]<harr[min])
		min=r;
	if(min!=i)
	{
		swap(&harr[i],&harr[min]);
		minheapify(min);
	}

}
	


void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}