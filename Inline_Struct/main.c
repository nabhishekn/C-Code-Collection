
#include <stdio.h>

static inline int funct()
{
    
    int a = 2;
    int b = 3;
    
    return a=a+b;
}
struct east{
    char a;
    char b;
    long double c;
    char r;
    char s;
    int f;
};

int structFun(struct east *ptr)
{
    ptr->c = 4.5;
    //printf("%ld\n", sizeof(west));
    printf("%Lf", ptr->c);   
}
int main()
{
    struct east west;
    struct east *ptr = &west;
    ptr->c = 2.5;
    printf("%ld\n", sizeof(west));
    printf("%Lf\n", ptr->c);
    structFun(ptr);
    int res = funct();
    printf("\n%d", res);
    return 0;
}