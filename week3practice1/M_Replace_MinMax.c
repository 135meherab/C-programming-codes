#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int max = INT_MIN;
    int min_index,mix_index;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
            min_index = i;
        }
        if (arr[i]>max)
        {
            max = arr[i];
            mix_index= i;
        }
        
        
    }
 

    int tmp = arr[min_index];
    arr[min_index]= arr[mix_index];
    arr[mix_index]= tmp;
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    return 0;
}