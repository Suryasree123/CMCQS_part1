#include<stdio.h>
int main()
{
	int a=5,b;
	b=a++;//b=a; a=a+1;b=5; a=6
	printf("%d %d",a,b);
	return 0;
}
