#include <stdio.h>
void main()
{
    int n, r, a[10]={0}, i=0;
    printf("Enter the number to check if it is Palindrome.");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
        i++;
    }
    for(int j=0;j<i/2;j++)
    {
        if(a[j]!=a[i-j-1])
        {
            printf("The number is not Palindrome");
            break;
        }
        else
        {
            printf("The number is Palindrome");
        }
    }
}
