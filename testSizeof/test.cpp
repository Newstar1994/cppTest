#include <stdio.h>

unsigned long fun_array_arg_sizeof(int * arr)
{
    return sizeof(arr);
}

int main() 
{
    int array[] = {1, 2, 3, 4, 5};
    int array_a[5];
    printf("sizeof array: %lu\n", sizeof(array));
    printf("sizeof(array) / sizeof(*array): %lu\n", sizeof(array) / sizeof(*array));
    printf("sizeof(*array):%lu\n", sizeof(*array));

    printf("sizeof(&array_a): %lu\n", sizeof(&array_a));

    printf("sizeof array when using it as a function argument: %lu\n", \
            fun_array_arg_sizeof(array));
}
