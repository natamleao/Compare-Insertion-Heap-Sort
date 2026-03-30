# Comparação: HeapSort vs InsertionSort em C com Medição de Tempo

![Language](https://img.shields.io/badge/language-C-blue)
![Standard](https://img.shields.io/badge/standard-C11-orange)
![Build](https://img.shields.io/badge/build-Makefile-green)
![Data Structure](https://img.shields.io/badge/data_structure-array%2Fheap-yellow)
![Algorithm](https://img.shields.io/badge/algorithm-comparison-lightgrey)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

---

## Visão geral

Neste projeto, implementei **HeapSort** e **InsertionSort** em C e comparei o desempenho dos dois algoritmos em **mesmo conjunto de dados**.

O objetivo foi sair do “funciona” e ir para o “quanto tempo isso leva na prática”, medindo com `clock_gettime` e observando o comportamento real para grandes volumes de dados.

---

## Funcionalidades

* Criação de Heap a partir de array
* Operações de Heap: inserção, extração do máximo, heapify
* HeapSort in-place
* InsertionSort para comparação
* Medição de tempo de execução com precisão
* Teste com grandes volumes de dados
* Liberação de memória

---

## Estrutura de dados

### Heap

A Heap é representada como um **array**, mantendo relações clássicas:

```
pai(i) = $\frac{i - 1}{2}$
esq(i) = 2*i + 1
dir(i) = 2*i + 2
```

### Array para InsertionSort

Um array simples, alocado dinamicamente, usado para ordenar com InsertionSort.

---

## Algoritmos

### HeapSort

```c
void heapSort(Heap *heap);
```

1. Constrói a heap a partir do array
2. Troca a raiz com o último elemento
3. Reduz a parte ativa da heap
4. Reorganiza com HeapifyDown

Complexidade:

* Tempo: `O(n log n)`
* Espaço: `O(1)`

### InsertionSort

```c
void insertionSort(Array *array);
```

1. Percorre o array a partir do segundo elemento
2. Insere o elemento na posição correta dentro da parte já ordenada

Complexidade:

* Tempo: `O(n^2)`
* Espaço: `O(1)`

---

## Medição de tempo

Usei `clock_gettime` com `CLOCK_MONOTONIC` para obter medições confiáveis:

```c
double executionTimeHeapSort = executionTimeCalculate(heapSortWrapper, arrayHeapSort);
executionTimePrint(executionTimeHeapSort);

double executionTimeInsertionSort = executionTimeCalculate(insertionSortWrapper, arrayInsertionSort);
executionTimePrint(executionTimeInsertionSort);
```

Exemplo de saída:

```
HeapSort - Tempo de execução: 0 H : 0 M : 0 S : 12 ms
InsertionSort - Tempo de execução: 0 H : 0 M : 3 S : 542 ms
```

---

## Estrutura do projeto

```
Compare-Sorts/
│
├── app/             # Aplicação principal (main)
├── bin/             # Executáveis gerados
├── include/         # Arquivos de cabeçalho (.h)
│
├── lib/             # Bibliotecas estáticas
│
├── Makefile         # Regras de compilação
├── README.md        # Documentação do projeto
└── LICENSE          # Licença do projeto
```

---

> [!IMPORTANT]
>
> ## Requisitos
>
> Para compilar e executar o projeto é necessário:
>
> * **GCC ou Clang**
> * **GNU Make**
> * Sistema **Linux ou macOS**

---

## Instalação

Clone o repositório:

```bash
git clone git@github.com:natamleao/Compare-Sorts.git
cd Compare-Sorts
```

---

## Compilação

```bash
make
```

---

## Execução

```bash
make run
```

---

## Limpeza do projeto

```bash
make cleanapp
```

---

> [!WARNING]
>
> ## Licença
>
> Este projeto está licenciado sob a **Licença MIT**.

---

## Autor

**Natam Leão Ferreira**

Conclusão: **2026**

---
