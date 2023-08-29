// #include <stdio.h>
// int main()
// {
//     char str[100];
//     scanf("%s",str);
//     int length=0;
//     for (int i = 0; str[i]!='\0'; i++)
//     {
//         length++;
//     }
//     printf("%d", length);
    
//     return 0;
// }
#include <stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int lnegth = 0;
    int i = 0;
    while (str[i]!='\0')
    {
        lnegth++;
        i++;
    }
    printf("%d",lnegth);
    
    return 0;
}