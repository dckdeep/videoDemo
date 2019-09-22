#include<stdio.h>
int main()
{

	int chetan;
	printf("Enter Number: ");
	scanf("%d",&chetan);
		if(chetan >=60)
		{
			printf("Amazon\n");
		}
		else if(chetan<=59 && chetan>=40)
		{
			printf("Samsung\n");
		}
		else{
			printf("Rest above\n");
		}
	return 0;
}
