// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Pointer Arithmetic
    int num = 30;
    int arr[3] = { 0,5,6 };
    int* p;
    double* q;

    printf("\nnum (in 'd' format specifier) = %d", num);
    printf("\nnum (in 'p' format specifier) = %p", num);
    printf("\n");

    p = &num;

    printf("\nnum addr (in 'd' format specifier) = %d", p);
    printf("\nnum addr (in 'p' format specifier) = %p", p);
    printf("\n");

    printf("\nsize of addition of 2 integers = %d", sizeof(num + num));
    printf("\nsize of addition of 2 sizeof = %d", (sizeof(num) + sizeof(num)));
    printf("\n");

    // Here it is treated as integer, thus 4.
    printf("\nsize of character = %d", sizeof('a'));
    printf("\nsize of string= %d", sizeof("a"));
    printf("\n");

    printf("\nsize of array= %d", sizeof(arr));
    printf("\n");

    p = arr;
    printf("\nsize of int pointer = %d", sizeof(p)); // 4 in 32 bit environment, 8 in 64 bit env.
    printf("\nsize of double pointer = %d", sizeof(q));
    printf("\n");

    return 0;

}