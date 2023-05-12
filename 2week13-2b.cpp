#include <stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	while(a)
	{
		i=a%10;
		a/=10;
		printf("%d",i);
	}

	printf("\n");
}
