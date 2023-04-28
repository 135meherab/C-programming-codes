#include <stdio.h>
#include <string.h>
int main()
{
    char mystr[1001];
    scanf("%s",mystr);
    int len = strlen(mystr);
    int i,j;
    int palindrome;
    for ( i = 0, j= len -1; i < j; i++,j--)
    {
        if(mystr[i]==mystr[j])
        {
            palindrome = 1;
        }
        else
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    
    return 0;
}