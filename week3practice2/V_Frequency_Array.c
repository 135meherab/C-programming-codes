#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int count [100000]={0};
    for (int i = 0; i < n; i++)
    {
        int value = a[i];
        count[value]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",count[i]);
    }
    
    
    
    return 0;
}