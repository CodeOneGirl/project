#include<stdio.h>
#include<stdlib.h>
void pyramid1(int n);
void pyramid2(int n);
int main()
{
	system("clear");
	int n;
	printf("\n\t enter the value of n:");
	scanf("%d",&n);
	pyramid1(n);
	pyramid2(n-1);
	
	return 0;
}
void pyramid1(int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("\n\t");
		for(int j=1;j<=i;j++)
		{
			printf("%c",(64+j));
		}
	}
}
void pyramid2(int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("\n\t");
		for(int j=1;j<=n+1-i;j++)
		{
			printf("%c",(64+j));
		}
	}
}

