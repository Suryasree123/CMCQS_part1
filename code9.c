#include<stdio.h>
int main()
{
	int a=5;                //8
	printf("%d %d %d %d %d",a++,++a,a--,++a,a++);
	//                        7   8   7   8   5
	return 0;
}
