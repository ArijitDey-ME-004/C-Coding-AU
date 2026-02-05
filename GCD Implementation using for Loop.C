# include <stdio.h>
void main()
{
    int x,y,n,i;
    printf("Enter the first number ");
    scanf("%d",&x);
    printf("Enter the second number ");
    scanf("%d",&y);
    if(x<y)
    n=x;
    else
    n=y;
    int gcd = 1;
    for(i=2;i<=n;i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd = gcd*i;
            x = x/i;
            y = y/i;
            i = 2;
        }
    }
    printf("The gcd is %d",gcd);
}
