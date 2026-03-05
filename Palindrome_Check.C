#include <stdio.h>

void main()
{
    int num, temp, s;
    int rev = 0;
    printf(" Enter a number to check if it is Palindrome ");
    scanf("%d",&num);
    temp = num;
    if (num==0)
        printf("Enter Valid Number");
    else
    {
        while(num!=0)
        {
            s = num%10;
            rev = rev*10 + s;
            num = num/10;
        }
        if(rev==temp)
            printf("The number is Palindrome");
        else
            printf("The number is not Palindrome");
    }
}
