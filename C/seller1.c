#include<stdio.h>
//#include<file.h>
void main()
{
int j;
//for(i=0;i<15;i++)
FILE *ofp;
ofp = fopen("output.txt", "w");
if (ofp == NULL) {
  fprintf(stderr, "Can't open input file in.list!\n");
  exit(1);
}
for(j=0;j<1543;j++)
{
//if(i==0)
fprintf(ofp,"Prairie Lights Bookstore\n");
fprintf(ofp,"Guide to Kulchur\n");
fprintf(ofp,"John King Used and Rare Books\n");
fprintf(ofp,"Myopic Books\n");
fprintf(ofp,"Magers & Quinn\n");
fprintf(ofp,"Full Circle Bookstore\n");
fprintf(ofp,"Common Good Books\n");
fprintf(ofp,"Square Books\n");
fprintf(ofp,"Bound To Be Read Books\n");
fprintf(ofp,"Maple Street Books\n");
fprintf(ofp,"Parnassus Books\n");
fprintf(ofp,"Heirloom Bookshop\n");
fprintf(ofp,"Books & Books\n");
fprintf(ofp,"Faulkner House Books\n");
fprintf(ofp,"South Congress Books\n");
}
fclose(ofp);
}
