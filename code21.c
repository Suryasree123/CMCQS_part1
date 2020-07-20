#include<stdio.h>
int main()
{
	int a=5,b=2;
	printf("%d",a/b);//2
	printf("\n%f",a/b);//0.000000
	printf("\n%f",(float)a/b);//5.0/2--->2.5
	return 0;
}
