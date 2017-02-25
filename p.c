#include<stdio.h>
void main()
	{
		int c,n1,n2,sum;
		do 
		{
			printf("calculator\n");
			printf("1.add 2.sub 3.mul 4.div 5.exit\n");
			printf("enter choice");
			scanf("%d",&c);
			switch(c)
			{
			case 1 : printf("enter the 2 nos:");
					scanf("%d",&n1);
					scanf("%d",&n2);
					sum=n1+n2;
					printf("sum=%d\n",sum);
					break;
					

			}

		}
		while(c!=5);
	}

