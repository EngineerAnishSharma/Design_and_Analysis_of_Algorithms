#include <stdio.h>
#include <math.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1,ctr=0;

    while (low <= high) {
        ctr++;
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ctr; 
}

int main() {
    int input_size = 1000;
    int sorted_list[1000];
    for (int i = 0; i < input_size; ++i) {
        sorted_list[i] = i;
    }

    int target_element = 999; 

    int binary_result = binarySearch(sorted_list, input_size, target_element);
    int log_value = (int)log2(input_size); 

    printf("Binary Search - Input Size: %d, Iterations: %d, Logarithmic Value: %d\n",
           input_size, binary_result != -1 ? binary_result + 1 : 0, log_value);

    return 0;
}
