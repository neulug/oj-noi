#include <stdio.h>
int main()
{
    int tmp;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &tmp);
        printf("%8d ", tmp);
    }
}