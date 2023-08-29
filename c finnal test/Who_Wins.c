#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x1,x2;
    int count_tiger = 0, count_pathan = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d",&x1, &x2);
        if (x1 > x2)
        {
            count_tiger++;
        }
        else if (x1 < x2)
        {
            count_pathan++;
        }
        else
        {
            count_pathan = count_pathan;
            count_tiger = count_tiger;
        }
    }
    if (count_tiger > count_pathan)
    {
        printf("Tiger");
    }
    else if (count_tiger < count_pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    

    return 0;
}