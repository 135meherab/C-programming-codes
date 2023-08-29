#include <stdio.h>
int main()
{
    int a, b, c, d;
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int sum_of_three = b + c + d;
        int final_result = a - sum_of_three;
        printf("%d\n",final_result);
    }
    
    return 0;
}