#include <stdio.h>

int main()
{

    return 0;
}

void reverse_array(int arr[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first <= last; first++, last--)
    {
        inplace_swap(&arr[first], &arr[last]);
    }
}

void inplace_swap(int *first, int *second)
{
    *second = *first ^ *second;
    *first = *first ^ *second;
    *second = *first ^ *second;
}