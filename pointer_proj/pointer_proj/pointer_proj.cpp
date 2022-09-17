// Max value in an array

#include <stdio.h>

float averageARRAY(int* ptr, int size);

int main() {
    int arr[] = {6,7,9,3,4};
    float avg_val = 0;

    avg_val = averageARRAY(arr, (sizeof(arr) / sizeof(int)));
    printf("\n Average value of an array = %f", avg_val);

    return 0;
}

float averageARRAY(int* ptr, int size)
{
    float sum = 0;
    float average = 0;

    for (int count = 0; count < size; count++)
    {
        sum = sum + (float)ptr[count];
    }

    average = (float)(sum/size);

    return average;
}