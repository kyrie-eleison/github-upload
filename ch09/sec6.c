// sec6. Recursion

// When we need 'divide-and-conquer'

#include <stdio.h>

void quick_sort(int length, int array[length], int start, int end);

int main(void) {

    int array[] = {12, 3, 6, 18, 7, 15, 10};
    int n = 7;
    quick_sort(n, array, 0, n - 1);
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void quick_sort(int length, int array[length], int start, int end) {

    if (end < start) {
        return;
    }
    int next_start = start;
    int next_end = end;

    int pivot = array[start];
    int empty_index = start;

    while (start < end) {

        while (array[end] >= pivot) {
            if (start < end){
                end--;
            } else {
                break;
            }
        }

        if (array[end] < pivot) {
            array[empty_index] = array[end];
            empty_index = end;
        } 

        while (array[start] <= pivot) {
            if (start < end) {
                start++;
            } else {
                break;
            }
        }

        if (array[start] > pivot) {
            array[empty_index] = array[start];
            empty_index = start;
        }
    }

    if (start == end ) {
        array[start] = pivot;
    }

    quick_sort(length, array, next_start,  start - 1);
    quick_sort(length, array, start + 1, next_end);
}