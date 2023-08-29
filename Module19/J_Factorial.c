#include <stdio.h>
long long int fun(int n)
{
    if(n == 0)
    {
        return 1;
    }
    long long int fact = fun(n-1);
    return fact * n;

}
int main()
{
    long long int n;
    scanf("%d",&n);
    long int res = fun(n);
    printf("%d",res);
    return 0;
}