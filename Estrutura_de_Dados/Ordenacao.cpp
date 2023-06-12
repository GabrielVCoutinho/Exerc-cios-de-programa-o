#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função auxiliar para trocar dois elementos de posição
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(&arr[i], &arr[minIndex]);
    }
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Merge Sort
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* leftArr = (int*)malloc(n1 * sizeof(int));
    int* rightArr = (int*)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    free(leftArr);
    free(rightArr);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função para exibir o array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    printArray(arr, n);
    printf("\n");

    clock_t start, end;
    double cpu_time_used;

    // Selection Sort
    start = clock();
    selectionSort(arr, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Selection Sort: ");
    printArray(arr, n);
    printf("Tempo de execução: %f segundos\n\n", cpu_time_used);

    int arr2[] = {64, 34, 25, 12, 22, 11, 90};

    // Bubble Sort
    start = clock();
    bubbleSort(arr2, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Bubble Sort: ");
    printArray(arr2, n);
    printf("Tempo de execução: %f segundos\n\n", cpu_time_used);

    int arr3[] = {64, 34, 25, 12, 22, 11, 90};

    // Insertion Sort
    start = clock();
    insertionSort(arr3, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Insertion Sort: ");
    printArray(arr3, n);
    printf("Tempo de execução: %f segundos\n\n", cpu_time_used);

    int arr4[] = {64, 34, 25, 12, 22, 11, 90};

    // Merge Sort
    start = clock();
    mergeSort(arr4, 0, n - 1);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Merge Sort: ");
    printArray(arr4, n);
    printf("Tempo de execução: %f segundos\n\n", cpu_time_used);

    int arr5[] = {64, 34, 25, 12, 22, 11, 90};

    // Quick Sort
    start = clock();
    quickSort(arr5, 0, n - 1);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Quick Sort: ");
    printArray(arr5, n);
    printf("Tempo de execução: %f segundos\n\n", cpu_time_used);

    return 0;
}