#include<stdio.h>

int main()

{
    char ch;

    printf("\n\n\t\t Enter a Letter: ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("\n\n\t\t This is a Vowel....");
    }
else
{
    printf("\n\n\t\t This is Consonent.....");
}

    return 0;
}
