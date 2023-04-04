# include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    if(money >= 10000)
    {
        printf("Gucci bag\n");
        if(money > 20000)
        {
            printf("Gucci belt");
        }
    }
    else if (money >= 5000)
    {
        printf("Levis bag");
    }
    else
    {
        printf("Something");
    }
    
    return 0;
}