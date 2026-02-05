# include <stdio.h>
int gcd();
void main()
{
    int a,b, p;
    printf("Enter the First Number ");
    scanf("%d",&a);
    printf("Enter the Second Number ");
    scanf("%d",&b);
    p = gcd(a,b);
    printf("GCD is %d",p);
}

int gcd(int x, int y){
    if(y!=0)
        return gcd(y,x%y);
    else
        return x;
}
