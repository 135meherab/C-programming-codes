// #include <stdio.h>
// int main()
// {
//     int x = 5;
//     if (x < 1)
//     {
//         printf("hello");
//     }
//     if (x == 5)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int x = 0;
//     if (x == 1)
//     {
//         if (x == 0)
//         {
//             printf("inside if if\n");
//         }
//         else
//         {
//             printf("inside if else\n");
//         }
//     }
//     else
//     {
//         printf("inside else\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int x = 0;
    if (x == 1)
    {
        if (x >= 0)
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}