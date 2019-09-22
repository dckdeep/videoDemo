#include<stdio.h>
void main()
{
	int a,b,ad,sb,mu;
	int di;
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("\nenter the value of b:");
	scanf("%d",&b);

	ad= a+b;
	sb= a-b;
	di=a/b;
	mu=a*b;

	printf("\nAddition: %d, \nSubstration: %d,\nMultiplication: %d,\nDivision: %d \n",ad,sb,mu,di);


}

