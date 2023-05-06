#include <stdio.h>
int sum_of_two(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int x, y;
    scanf("%d %d",&x , &y);
    printf("%d",sum_of_two(x,y));

    return 0;
}