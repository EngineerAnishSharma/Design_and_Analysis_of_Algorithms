#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    int ctr=0;
    for (int i = 0; i < size; ++i) {
        ctr++;
        if (arr[i] == target) {
            break;
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

    int linear_result = linearSearch(sorted_list, input_size, target_element);

    printf("Linear Search - Input Size: %d, Iterations: %d\n", input_size, linear_result != -1 ? linear_result : 0);

    return 0;
}
