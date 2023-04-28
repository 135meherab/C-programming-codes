#include <stdio.h>
int main()
{
    long long int a, b, c, count, final_count;
    scanf("%lld %lld %lld", &a, &b, &c);
    if(a < b && a < c)
    {
        count = a;
    }
    else if (b < a && b < c)
    {
        count = b;
    }
    else
    {
        count = c;
        
    }
    a = a - count;
    b = b - count;
    c = c - count;
    long long int half_eye = a / 2;
    if (a == 0 && c == 0)
    {
        final_count = count;
    }
    else if (half_eye >= c)
    {
        final_count = count + c;
    }
    else if( half_eye < c)
    {
        final_count = count + half_eye;
    }

    printf("%lld", final_count);
    return 0;
}