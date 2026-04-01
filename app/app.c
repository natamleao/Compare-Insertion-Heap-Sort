#include "../include/execution_time.h"
#include "../include/insertion_sort.h"
#include "../include/heap.h"
#include "../include/heap_sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

int main(){ 

    Heap *arrayHeap = heapCreate( SIZE);

    StructureArray *arrayInsertion = structureArrayCreate(SIZE);

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        float min = -5000000000.0f;
        float max =  5000000000.0f;
        float value = min + ((float)rand() / RAND_MAX) * (max - min);
        structureArraySet(arrayInsertion, i, value);
        heapSetValue(arrayHeap, i, value);
    }

    double executionTimeHeapSort = executionTimeCalculate(heapSortWrapper, arrayHeap);
    printf("HeapSorte - ");
    //printArray(arrayHeap);
    executionTimePrint(executionTimeHeapSort);
//
    double executionTimeInsertionSort = executionTimeCalculate(insertionSortWrapper, arrayInsertion);
    printf("InsertionSort - ");
    //printArray(arrayInsertion);
    executionTimePrint(executionTimeInsertionSort);

    structureArrayDestroy(arrayInsertion);
    heapDestroy(arrayHeap);

    return 0;
}