#include<stdio.h>

int main()

{
    int a;

    printf("\n\n\t\t Enter a number:");
    scanf("%d", &a);

    if(a%2==0)
    {
        printf("\n\n\t\t The Number is Even.....");
    }
    else
    {
        printf("\n\n\t\t The Number is Odd......");
    }

    return 0;
}


