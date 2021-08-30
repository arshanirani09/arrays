#include <stdio.h>

void main()
{
  int a[3][3],i,j;
  
  printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&a[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
      {
            printf("%d ", *(*(a + i) + j));
      }
    
  }
  
  int sum=0;
  
  for(i=0;i<3;i++)
  {
  	sum=sum+a[i][i];
  }

printf("\n Sum of all diagonal elemnts of matrix is: %d ",sum);


}

