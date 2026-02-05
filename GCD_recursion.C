# include <stdio.h>
int gcd();
void main()
{
    int a,b, p;
    printf("Enter the Bigger Number ");
    scanf("%d",&a);
    printf("Enter the Smaller Number ");
    scanf("%d",&b);
    p = gcd(a,b);
    printf("GCD is %d",p);
}

int gcd(int x, int y){
    if(y!=0)
    return (y,x%y);
    else
    return x;
}
