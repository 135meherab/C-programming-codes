#include <stdio.h>
int main()
{
    char latter;
    scanf("%c", &latter);
    if(latter>='A' && latter<='Z')
    {
        int lowercase = latter + 32; 
        printf("%c", lowercase);
    }
    else
    {
        int uppercase = latter - 32;
        printf("%c", uppercase);
    }

    return 0;
}