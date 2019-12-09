#include<stdio.h>
main()
{
	int n;
	printf("\n enter a number:");
	scanf("%d",&n);
	if(n%2==0)
	goto even;
	else
	goto odd;
	even: printf("\n Even");
	odd: printf("\n Odd");
}
