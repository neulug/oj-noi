#include <stdio.h>
int main(){
    char a;
    int s;
    float d;
    double f;
    scanf("%c",&a);
    scanf("%d",&s);
    scanf("%f",&d);
    scanf("%lf",&f);
    printf("%c %d %.6f %.6lf",a,s,d,f);
}