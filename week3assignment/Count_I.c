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
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        
    }
    printf("%d %d",even_count,odd_count);
    
    
    return 0;
}