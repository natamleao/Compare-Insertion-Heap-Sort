/******************************************************* INTERFACE PUBLICA *******************************************************/

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "array.h"

/**
 * @brief Wrapper para permitir chamar `insertionSort` através de ponteiros genéricos.
 *
 * @param a Ponteiro para a estrutura `Array` (passado como `void*` para compatibilidade).
 *
 * @note Usado principalmente com funções como `executionTimeCalculate` que aceitam `void*`.
 */
void insertionSortWrapper(void *a);

/**
 * @brief Ordena um array de elementos em ordem crescente usando o algoritmo Insertion Sort.
 *
 * @param array Ponteiro para a estrutura `Array` a ser ordenada.
 *
 * @note O algoritmo percorre o array, inserindo cada elemento na posição correta
 *       em relação aos elementos anteriores.
 */
void insertionSort(Array *array);

#endif

/*********************************************************************************************************************************/