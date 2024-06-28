#include<stdio.h>
#include<conio.h>

void main() {
    int i,j,k; 
	int num =1;

    for(i=0;i<5;i++) 
	{
        for(k=0;k<i;k++) 
		{
            printf("  "); 
        }
        for(j=0;j<5-i;j++) 
		{
            printf("%d",num);
            num = 1 - num; 
            if(j<5-i-1) 
			{
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
}

