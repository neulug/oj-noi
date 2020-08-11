#include <stdio.h>
int main(){
    char a;
    int i,j;
    scanf("%c",&a);
    for(i=1;i<=3;i++,putchar('\n')){
        for(j=1;j<=(5-(2*i-1))/2;j++)
            putchar(' ');
        for(j=1;j<=(2*i-1);j++)
            putchar(a);
        for(j=1;j<=(5-i)/2;j++)
            putchar(' ');
    }
    for(i=2;i>=1;i--,putchar('\n')){
        for(j=1;j<=(5-(2*i-1))/2;j++)
            putchar(' ');
        for(j=1;j<=(2*i-1);j++)
            putchar(a);
        for(j=1;j<=(5-i)/2;j++)
            putchar(' ');
    }
}