#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    printf("Value = %d\n", a);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}