#include <stdio.h>

int main()
{
    int arr[5] = {3, 1, 5, 7, 2};
    int n=5;
    int max = arr[0];
    int min = arr[0];
    int ctr = 0;

    for (int i = 1; i < 5; i++)
    {
        ctr++;
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    for (int i = 1; i < 5; i++)
    {
        ctr++;
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Input size is %d | ", n);

    printf("No. of comparison is %d | ", ctr);

    printf("Time Complexity: O(%d)\n",n);

    return 0;
}
