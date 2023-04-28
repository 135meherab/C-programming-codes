# include <stdio.h>
# include <string.h>
int main()
{
    char my_str[1001];
    scanf("%s",my_str);
    int count[1001]={0};
    for (int i = 0; i < strlen(my_str); i++)
    {
        int value = my_str[i]-97;
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n",i+97, count[i]);
    }
    
    

    return 0;
}