#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        char mystr[101];
        scanf("%s",mystr);
        int len = strlen(mystr);
        if (len>10)
        {
            
            printf("%c",mystr[0]);
            printf("%d",len-2);
            printf("%c",mystr[len-1]);
            printf("\n");
            
        }
        else
        {
            printf("%s\n",mystr);
        }
    }
    
    return 0;
}