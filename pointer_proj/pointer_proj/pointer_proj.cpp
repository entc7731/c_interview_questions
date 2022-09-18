// Good Neighbour Program

#include <stdio.h>

int IsGoodNeighbourPresent(int* arr, int size);

int main() {
    int arr[] = {3, 6, 2, 8, 19, 11, 89, 7, 13, 5, 7, 9, 23};
    int GoodNeighbourFlag = 0;

    GoodNeighbourFlag = IsGoodNeighbourPresent( arr, sizeof(arr)/sizeof(int));

    if (GoodNeighbourFlag)
        printf("\n There is good neighbour present in the array.");
    else
        printf("\n There is no any good neighbour present in the array.");
    return 0;

}
int IsGoodNeighbourPresent(int* arr, int size)
{
    for (int count = 1; count < (size - 1); count++)
    {
        if (arr[count] == (arr[count - 1] + arr[count + 1]))
            return 1;
    }
    return 0;
}