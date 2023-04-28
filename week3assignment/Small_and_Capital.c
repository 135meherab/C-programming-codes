# include <stdio.h>
# include <string.h>
int main()
{
    char my_str[1001];
    scanf("%s",my_str);
    int cap_count = 0, small_count = 0;
    for (int i = 0; i < strlen(my_str); i++)
    {
        if (my_str[i]>='a' && my_str[i]<='z')
        {
            small_count++;
        }
        else
        {
            cap_count++;
        }
    }
    printf("%d %d",cap_count,small_count);
    
    return 0;
}