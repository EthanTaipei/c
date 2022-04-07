#include <stdio.h>

int a[1000];

int main()
{
    int i, sum = 0;
    for (i = 0; i < 1000; i++) {
        sum += i;
        a[i] = sum;
    }
    printf("sum = %d\n", sum);
    
    return 0;
}