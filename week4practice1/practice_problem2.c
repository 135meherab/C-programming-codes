#include <stdio.h>
int main()
{
    int n,star,space;
    scanf("%d",&n);
    star = (2 * n)-1;
    space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        space++;
        star = star - 2;
        printf("\n");
        
    }
    
    return 0;
}