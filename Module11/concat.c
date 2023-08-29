// #include <stdio.h>
// #include <string.h> 
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s",a,b);
//     int j = strlen(a);
//     for (int i = 0; i <=3 ; i++,j++)
//     {
//         a[j]=b[i];
//     }
//     a [j] = '\0';
    
//     printf("%s",a);
    
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    strcat(a,b);
    printf("%s",a);
    return 0;
}