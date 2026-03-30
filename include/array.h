/******************************************************* INTERFACE PUBLICA *******************************************************/

#ifndef ARRAY_H
#define ARRAY_H

// Estrutura de array
typedef struct _array Array;

/**
 * @brief Cria a estrutura de um array.
 *
 * @param size Quantidade de elementos válidos inicialmente no array.
 * @param capacity Capacidade máxima do array (deve ser >= size).
 * @return Ponteiro para o array alocado, ou NULL em caso de falha.
 */
Array* arrayCreate(int size, int capacity);

/**
 * @brief Retorna o vetor interno de dados do array.
 *
 * Permite acesso direto ao array que armazena os elementos.
 *
 * @param array Ponteiro para a estrutura do array.
 * @return Ponteiro para o vetor de floats que representa os dados.
 */
float* arrayGetArray(Array *array);

/**
 * @brief Retorna a capacidade máxima do array.
 *
 * @param array Ponteiro para a estrutura do array.
 * @return Número máximo de elementos que o array pode armazenar.
 */
int arrayGetCapacity(Array *array);

/**
 * @brief Retorna o tamanho atual do array.
 *
 * @param array Ponteiro para a estrutura do array.
 * @return Número de elementos atualmente válidos no array.
 */
int arrayGetSize(Array *array);

/**
 * @brief Retorna o valor de um elemento no array.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param index Índice do elemento a ser retornado.
 * @return Valor do elemento no índice especificado.
 */
float arrayGetValue(Array *array, int index);

/**
 * @brief Substitui o vetor interno de dados do array.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param _array Novo vetor de floats que substituirá os dados atuais.
 */
void arraySetArray(Array *array, float *_array);

/**
 * @brief Ajusta a capacidade máxima do array.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param value Nova capacidade máxima ou incremento de capacidade.
 */
void arraySetCapacity(Array *array, int value);

/**
 * @brief Ajusta o tamanho atual do array.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param value Novo tamanho ou incremento do tamanho atual.
 */
void arraySetSize(Array *array, int value);

/**
 * @brief Modifica o valor de um elemento no índice especificado.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param index Índice do elemento a ser alterado.
 * @param value Novo valor a ser armazenado.
 */
void arrayChange(Array *array, int index, float value);

/**
 * @brief Adiciona um valor a um elemento no índice especificado.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param index Índice do elemento.
 * @param value Valor a ser adicionado ao valor atual do elemento.
 */
void arrayAddValue(Array *array, int index, float value);

/**
 * @brief Imprime todos os elementos do array no console.
 *
 * @param array Ponteiro para a estrutura do array.
 *
 * @note Os elementos são impressos na ordem interna do vetor.
 */
void arrayPrint(Array *array);

/**
 * @brief Libera toda a memória usada pelo array.
 *
 * Desaloca o vetor interno de dados e a própria estrutura do array.
 *
 * @param array Ponteiro para a estrutura do array a ser destruída.
 */
void arrayDestroy(Array *array);

#endif

/*********************************************************************************************************************************/