#include<stdio.h>
void main()
{
	int a,b;
	printf("\n enter the two numbers: a & b:");
	scanf("%d %d", &a,&b);


	if(a>b)
         {
		 printf("greater\n");

	 }

else  if(a<b)
         {
		 printf("smaller\n");
	 }
else
{
	printf("equal");
}

	}


