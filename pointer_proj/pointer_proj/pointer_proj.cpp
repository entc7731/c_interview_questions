// Min and max value in an array
// Pointer is used for taking 2 outputs (minimum and maximum value)

#include <stdio.h>

void minmaxARRAY(int* ptr, int size, int *min, int *max);

int main() {
    int arr[] = {6,7,9,37,4,8,7,12,-1};
    int min_value = 0;
    int max_value = 0;

    minmaxARRAY(arr, (sizeof(arr) / sizeof(int)), &min_value, &max_value);
    printf("\n Minimum value in an array = %d", min_value);
    printf("\n Maximum value in an array = %d", max_value);

    return 0;
}

void minmaxARRAY(int* ptr, int size, int *min, int *max)
{
    *min = ptr[0];
    *max = ptr[0];

    for (int count = 1; count < size; count++)
    {
        if (*min > ptr[count])
            *min = ptr[count];
        if (*max < ptr[count])
            *max = ptr[count];
    }
}