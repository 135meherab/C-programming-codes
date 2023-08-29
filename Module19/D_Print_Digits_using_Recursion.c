#include <stdio.h>
void fun(int n)
{
    if (n == 0) return;
    fun(n/10);
    printf("%d ",n%10);
}
int main()
{
    int n,num;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&num);
        fun(num);
        if (num == 0)
        {
            printf("0");
        }
        printf("\n");

    }
    
    return 0;
}