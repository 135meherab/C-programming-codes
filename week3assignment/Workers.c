# include <stdio.h>
int main()
{
    int m1,m2,d;
    scanf("%d %d %d",&m1, &m2, &d);
    int one_persorn = d * m1;
    int final_day = one_persorn / m2;
    printf("%d",final_day);
    return 0;
}