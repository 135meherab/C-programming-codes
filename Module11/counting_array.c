#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int count[7]={0};
    for (int i = 0; i < n; i++)
    {
        int value = a[i];
        count[value]++;
        
    }
    for (int i = 0; i <=6; i++)
    {
        printf("%d\n",i);
    }
    
    
    return 0;
}