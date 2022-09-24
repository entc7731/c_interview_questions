// Program to reverse an array

#include <stdio.h>

void reverse_array(int* arr, int size);
void swap_array_element(int* num1, int* num2);

int main() 
{

    int arr1[] = { 1,2,3,4,5,6,7,8,9 };
    int arr2[] = { 1,2,3,4,5,6,7,8 };

    printf("\n Original Array is : \n ");

    for(int count = 0; count < (sizeof(arr1) / sizeof(int)); count++)
        printf("%d ", arr1[count]);

    reverse_array(arr1, (sizeof(arr1) / sizeof(int)));

    printf("\n Reversed Array is : \n ");
    for (int count = 0; count < (sizeof(arr1) / sizeof(int)); count++)
        printf("%d ", arr1[count]);

    return 0;

}

void reverse_array(int* arr, int size)
{
    for (int count = 0; count < (size / 2); count++)
        swap_array_element(&arr[count], &arr[size - 1 - count]);
}

void swap_array_element(int *num1, int *num2)
{
    int temp = 0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}