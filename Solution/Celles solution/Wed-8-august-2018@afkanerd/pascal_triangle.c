/*  The Algorithm  of this code.
in Pascal's triangle, each value starts with a 1 and then followed by a space between each number another space. 
Each value is a recusive generation of the two previous values. to attain this i used the formular x = x*(r-n+1)/n
where x = the previous number and r= row number n= counter */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int rowNum;
	printf("Enter the number of rows\n");
	scanf("%d",&rowNum);

	int n, space, r , x;

	for (r = 0; r < rowNum; r++)
	{
		for ( space = 1 ; space < rowNum-r; space++)
		{
			printf(" ");
		}
		for (n = 0; n <= r; n++)
		{
			if (r == 0 || n ==0 )
			{
				x = 1;
				printf("%d ",x);
			}
			else 
			{
				x = x*(r-n+1)/n;
				printf("%d ",x);
			}
		}
		printf("\n");
	}
}