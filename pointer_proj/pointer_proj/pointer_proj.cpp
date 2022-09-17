// Max value in an array

#include <stdio.h>

int findMAX(int* ptr, int size);

int main() {
    int arr[] = { 156,7,89,3,4598};
    int max_val = 0;

    max_val = findMAX(arr, (sizeof(arr) / sizeof(int)));
    printf("\n Max value in an array = %d", max_val);

    return 0;
}

int findMAX(int* ptr, int size)
{
    int temp = 0;
    int max_val_loc = ptr[0];

        for (int count = 1; count < size; count++)
        {
            if (max_val_loc < ptr[count])
                max_val_loc = ptr[count];
        }

    return max_val_loc;
}