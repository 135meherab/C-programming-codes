#include <stdio.h>
int main()
{
    char letter;
    scanf("%c",&letter);
    int next_letter= letter + 1;
    if(letter == 'z')
    {
        printf("a");
    }
    else
    {
        printf("%c",next_letter);
    }
    return 0;
}