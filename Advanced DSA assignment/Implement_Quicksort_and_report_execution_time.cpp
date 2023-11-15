// Implement Quicksort and report the execution time with different arrangements of input key values  (like random keys, sorted keys, duplicate keys, etc). The input size of the array should be at least 100.
#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

double executiontime(int arr[], int n) {
    clock_t start, end;
    start = clock();
    quicksort(arr, 0, n - 1);
    end = clock();
    return static_cast<double>(end - start) / CLOCKS_PER_SEC;
}

int main() {
    const int n = 100;
    int arr[n];

    srand(static_cast<unsigned>(time(0)));

    // Random
    int ran_arr[n];
    for (int i = 0; i < n; i++) {
        ran_arr[i] = rand() % 1000;
    }
    std::cout << "Execution time for random keys: " << executiontime(ran_arr, n) << " seconds" << std::endl;

    // Sorted
    int sort_arr[n];
    for (int i = 0; i < n; i++) {
        sort_arr[i] = i;
    }
    std::cout << "Execution time for sorted keys: " << executiontime(sort_arr, n) << " seconds" << std::endl;

    // Duplicate
    int dupli_arr[n];
    for (int i = 0; i < n; i++) {
        dupli_arr[i] = rand() % 10;
    }
    std::cout << "Execution time for duplicate keys: " << executiontime(dupli_arr, n) << " seconds" << std::endl;

    return 0;
}
