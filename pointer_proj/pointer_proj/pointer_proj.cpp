// Is an array really sorted, sorted or not sorted

#include <stdio.h>

int array_type(int *arr, int size, int *sorting_type_loc);
int main() {

    int arr1[] = { 1,2,3,4,5,6,7,8 };
    int arr2[] = { 1,2,3,4,4,5,6,7 };
    int arr3[] = { 4,6,7,4,2,7,8,9 };
    int sorting_type = 0;
    int result = 0;
    
    result = array_type(arr1, (sizeof(arr1) / sizeof(int)), &sorting_type);

    if ((result == 1) && (sorting_type == 1))
        printf("\n The array is REALLY sorted.");
    else if((result == 1) && (sorting_type == 0))
        printf("\n The array is sorted.");
    else if ((result == 0) && (sorting_type == 0))
        printf("\n The array is not sorted.");
    else
    {
        // intentionally kept blank
    }
    return 0;

}

int array_type(int* arr, int size, int* sorting_type_loc)
{
    *sorting_type_loc = 1;

    for (int count = 1; count < (size - 1); count++)
    {
        if (arr[count] < arr[count - 1])
        {
            *sorting_type_loc = 0;
            return 0;
        }
        else if (arr[count] == arr[count - 1])
        {
            *sorting_type_loc = 0;
        }
        else
        {
            // intentionally kept blank
        }
    }
    return 1;
}