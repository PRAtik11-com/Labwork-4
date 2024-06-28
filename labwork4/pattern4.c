#include<stdio.h>
#include<conio.h>

void main() {
    int i,j,k,h;

    for(i=0;i<5;i++) 
	{
        for(k=0;k<5-i-1;k++) 
		{
            printf("  ");
        }

        for(j=5-i;j<=5;j++) 
		{
            printf("%d",j);
            if(j<5) 
			{
                printf(" ");
            }
        }
        for(h=5-1;h>=5-i;h--) 
		{
            printf(" %d",h);
        }
        printf("\n");
    }

    getch();
}

