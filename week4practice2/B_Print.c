#include <stdio.h>
void print_function(int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        printf("%d ",i);
    }
    printf("%d",i);

}
int main()
{
    int n;
    scanf("%d",&n);
    print_function(n);
    return 0;
}