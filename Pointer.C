#include <stdio.h>
void main()
{
    int a=2;
    int *p;
    p=&a;
    printf("%d ",a);
    printf("%d ",p);
    printf("%d ",*p);
    printf("%d ",&a);
}
