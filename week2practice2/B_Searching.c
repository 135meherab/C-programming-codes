#include <stdio.h>
int main()
{
    int n, is_found = -1;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int elemnet;
    scanf("%d", &elemnet);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==elemnet)
        {
            is_found = i;
            break;
        }
    }
    printf("%d", is_found);
    
    return 0;
}