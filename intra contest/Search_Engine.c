#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int k = 1; k <= t ; k++)
    {
        int n,position,tc, flag = 0;
        scanf("%d",&n);
        int num[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&num[i]);
        }
        int s;
        scanf("%d",&s);
        for (int i = 0; i < n; i++)
        {
            if(num[i]==s)
            {
                flag = 1;
                position = i+1;
                break;
            }
        }
        
        if(flag==1)
        {
            printf("Case %d: %d\n",k,position);
        }
        else
        {
            printf("Case %d: Not Found\n",k);
        }
    }
    
    
    
    return 0;
}