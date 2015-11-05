//sparse.cpp find the next sparse integer given an integer
//sparse is no adjacent 1's in binary notation

#include "iostream"
//##include "sparse.h"

using namespace std;

int nextsparse(int n) //find the next sparse int given n;
{
	//binary representation of the int n-easy way
	std::vector<bool> bin;

	while(x!=0)
	{
		bin.push_back(x&1); //last bit of x is anded with 1
		x>>1; //right shift x by 1 bit

		//The bin version is already inverted :O
	}

	//At the end of the loop, bin should have the binary rep of
	//n as a vector
	size_t length_bin = bin.size();

	//logic to move it forward
	//	int i=length_bin-1;  //last index pointed. We traverse from lsb
	
	for(i=1;i<n-1;i++)
	{
		if(bin[i]==1 && bin[i-1]==1 && bin[i+1]!=1)
		{
			bin[i+1]=1;

		}

		for(int j=i;j>=last_final;j--)
			bin[j]=0;

	}





		}
	





	// one life don't live with fear. shine bright like a diamond

}
