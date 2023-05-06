#include <stdio.h>
#include <limits.h>
void min_mix(int arr[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min )
        {
            min = arr[i];
        }
        if (arr[i]> max)
        {
            max = arr[i];
        }
    }
     printf("%d %d", min, max);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    min_mix(arr,n);
    return 0;
}