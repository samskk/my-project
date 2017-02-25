#include<stdio.h>
void main()
	{
		int c;
		do 
		{
			printf("calculator\n");
			printf("1.add 2.sub 3.mul 4.div 5.exit\n");
			printf("enter choice");
			scanf("%d",&c);
		}
		while(c!=5);
	}
