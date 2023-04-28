# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int x_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            x_count++;
        }
        
    }
    
    printf("%d",x_count);
    return 0;
}