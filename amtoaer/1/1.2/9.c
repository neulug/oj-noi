#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    a = a == 0 ? 0 : 1;
    printf("%d", a);
}