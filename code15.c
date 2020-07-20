#include <stdio.h>
void main()
{
    int a = 5, b = -7, c = 0, d;
    d = ++a && ++b || ++c;// 6 && -6 --->1 ||
    printf("%d %d %d %d", a,  b, c, d);// 6 -6 0 1
}
