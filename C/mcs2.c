#include<stdio.h>
/* Include other headers as needed */

int main()
{
    /* Write your code here */
    int n1;
    int n,m;
    scanf("%d",&n1);
    while(n1--){
        
        scanf("%d%d",&n,&m);
        
        int i=n;
        
        int **arr;
        
        arr=(int**)malloc(n*sizeof(int*) );
        
        for(i=0;i<n;i++)   
        arr[i]=(int*)malloc(sizeof(int)*m);
    
        
        ///////////
        
        //int **arr = (int **)malloc(r * sizeof(int *));
        //for (i=0; i<r; i++)
        // arr[i] = (int *)malloc(c * sizeof(int));
         
         //////////
 
        
        
       char select;
        scanf("%c",&select); 
        
        
        int r,c; //row ,column abstractions
        
        for(r=0;r<n;r++)
        {
            for(c=0;c<m;c++)
            {
                scanf("%d",&arr[r][c]);
                printf("\n Stored %d at location %d\n",arr[r][c],&arr[r][c]);
            }
            puts("Going to the next row");
        }
        puts("Hi Hello");
        
        puts("Hi Hello Howdy");
        if(select='V')
        {
            for(r=0;r<n;r++)
            {
                for(c=0;c<m;c++)
                {
                    printf("%d",arr[r][n-c]);
                }
            }
        }
        
        
       if(select='H')
        {
            for(r=0;r<n;r++)
            {
                for(c=0;c<m;c++)
                {
                    printf("%d",arr[n-r][c]);
                }
            }
        } 
        
       
        
        
        
    }
    
    /* Return 0 to indicate normal termination */
    return 0;
}

