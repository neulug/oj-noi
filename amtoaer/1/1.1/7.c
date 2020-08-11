#include <stdio.h>
int main()
{
    double t;
    scanf("%lf", &t);
    printf("%f\n%.5f\n%e\n%g", t, t, t, t);
    return 0;
}