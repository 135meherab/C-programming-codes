#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arry[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arry[i]> arry[j])
            {
                int tmp = arry[i];
                arry[i] = arry[j];
                arry[j] = tmp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arry[i]);
    }
    
    
    return 0;
}