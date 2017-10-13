#include <stdio.h>

int main() {
	//code
	int numcases, slen;
	scanf("%d",numcases);
	for(int i=0;i<numcases;i++)
	{
	    scanf("%d",slen);
	    char* mystring= (char*)malloc(slen+1);
	    for(int i=0;i<slen;i++)
	        {
	            scanf("%c", mystring[i]);
	        }
	        mystring[slen]='\0';
	    
	   int ret = findcombs(mystring,index);
	    return ret
	}
	return 0;
}

int findcombs(char *string, int index)
{
    if(!string)
    return 0;
    
    if(!string[index]) //returned END
    return 1;
    
    if(!string[index]<'3' || !string[index+1]<'7')
    return findcombs(string, index)+ findcombs(string, index+1);
    
    else
    return findcombs(string, index+1);
    
}