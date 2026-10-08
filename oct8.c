#include <stdio.h>

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int sum = 0, i;

    for (i = 0; i < 5; i++)
        sum += arr[i];

    printf("Sum = %d\n", sum);

    return 0;
}