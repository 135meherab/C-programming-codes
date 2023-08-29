#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], t[1000];
    scanf("%s %s", s, t);
    int s_size = strlen(s);
    int t_size = strlen(t);
    printf("%d %d\n",s_size, t_size);
    printf("%s %s", s , t);
    return 0;
}