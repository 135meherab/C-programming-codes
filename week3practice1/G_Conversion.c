#include <stdio.h>
#include <string.h>
int main()
{
    char mystr[100001];
    scanf("%s",mystr);
    int len= strlen(mystr);
    for (int i = 0; i < len; i++)
    {
        if(mystr[i]>='A' && mystr[i]<='Z')
        {
            mystr[i]= mystr[i]+32;
        }
        else if (mystr[i]>='a' && mystr[i]<='z')
        {
            mystr[i] = mystr[i]-32;
        }
        else if (mystr[i]==',')
        {
            mystr[i]= mystr[i]-12;
        }
        printf("%c",mystr[i]);


    }
    
    return 0;
}