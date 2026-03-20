#include <stdio.h>

void main()
{
    int a[]={10,12,15};
    int size=3;
    for(int i=0;i<size;i++)
    {
        if(i<size-1)
        {
            printf("Pairs for %d: ",a[i]);
            for(int j=i+1;j<size;j++)
            {
                printf(" (%d,%d) ",a[i],a[j]);
            }
            printf("\n\n");
        }
    }
}
