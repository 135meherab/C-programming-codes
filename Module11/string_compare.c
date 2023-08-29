// #include <stdio.h>
// int main()
// {
//     char a[100],b[100];
//     scanf("%s %s", a, b);
//     int i = 0;
//     while (1)
//     {
//        if(a[i]=='\0' && b[i]=='\0')
//        {
//             printf("Same");
//             break;
//        } 
//        else if (a[i] == '\0')
//        {
//             printf("a small");
//             break;
//        }
//        else if (b[i]== '\0')
//        {
//             printf("b small");
//             break;
//        }
//        else if (a[i]==b[i])
//        {
//             i++;
//        }
//        else if (a[i]<b[i])
//        {
//             printf("a small");
//             break;
//        }
//        else
//        {
//             printf("b small");
//             break;
//        }
       
       
       
       

//     }
    
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s", a, b);
    int value = strcmp(a,b);
    printf("%d",value);
    return 0;
}