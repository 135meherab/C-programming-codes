#include <stdio.h>
int sumOfTwo(int x, int y)
{
    int jogfol = x + y;
    return jogfol;
}
int main()
{
    int result = sumOfTwo(10,20);
    printf("%d", result);
    return 0;
}