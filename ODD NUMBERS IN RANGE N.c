#include<stdio.h>
int main(void)
{
	int i,n;
	printf("Enter the max. value of n :-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			printf("%d\t",i);
	}
	return 0;
}
