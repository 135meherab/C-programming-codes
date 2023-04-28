#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum_even = 0,sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            sum_even = sum_even + arr[i];
        }
        else
        {
            sum_odd = sum_odd + arr[i];
        }
    }
    
    printf("%d %d",sum_even,sum_odd);
    return 0;
}