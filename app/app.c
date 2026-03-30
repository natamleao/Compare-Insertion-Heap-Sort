#include "../include/executionTime.h"
#include "../include/insertionSort.h"
#include "../include/heap.h"
#include "../include/heapSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CAPACITY 1000000000
#define SIZE 1000000

int main(){

    float *_array = calloc(CAPACITY, sizeof(float));
    if(!_array){
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        float min = -5000000000.0f;
        float max =  5000000000.0f;
        _array[i] = min + ((float)rand() / RAND_MAX) * (max - min);
    }

    Heap *arrayHeapSort = heapCreate(_array, SIZE, CAPACITY);

    Array *arrayInsertionSort = arrayCreate(SIZE, CAPACITY);

    for(int i = 0; i < SIZE; i++)
        arrayAddValue(arrayInsertionSort, i, _array[i]);

//    printf("Array criado!\n");
//    printArray(arrayHeapSort);
//
//    heapBuildFromArray(arrayHeapSort);
//    printf("Heap construída!\n");
//    printArray(arrayHeapSort);
//
    //heapInsertKey(arrayHeapSort, 13.0);
    //printf("Após a inserção!\n");
    //printArray(arrayHeapSort);
//
    //heapExtractMax(arrayHeapSort);
    //printf("Após a remoção!\n");
    //printArray(arrayHeapSort);
//
    //heapInsertKey(arrayHeapSort, -10.0);
    //printf("Após a inserção!\n");
    //printArray(arrayHeapSort);

    double executionTimeHeapSort = executionTimeCalculate(heapSortWrapper, arrayHeapSort);
    printf("HeapSorte - ");
    //printArray(arrayHeapSort);
    executionTimePrint(executionTimeHeapSort);
//
    double executionTimeInsertionSort = executionTimeCalculate(insertionSortWrapper, arrayInsertionSort);
    printf("InsertionSort - ");
    //printArray(arrayInsertionSort);
    executionTimePrint(executionTimeInsertionSort);

    return 0;
}