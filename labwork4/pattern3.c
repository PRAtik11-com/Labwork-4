#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	int number=5;
	
	
	
	for(i=0;i<number;i++)
	{    
		for(k=1;k<=number-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{   
  
			printf("%d",number-j);	
		}
		printf("\n");
		
		

	
	}
	
	getch();
}
