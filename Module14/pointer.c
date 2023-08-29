// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int * p = &x;
//     printf("%p\n",&x);
//     printf("%p\n",p);
//     printf("%d\n",*p);
//     *p = 500;
//     printf("%d\n",x);
//     return 0;
// }
 #include <stdio.h>
    void m(int *p)
    {
        int i = 0;
        for(i = 0;i < 5; i++)
        printf("%d\t", p[i]);
    }
    void main()
    {
        int a[5] = {6, 5, 3};
        m(&a);
    }