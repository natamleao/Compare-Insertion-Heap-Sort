# Comparação: *Heap Sort* vs *Insertion Sort* em C com Medição de Tempo

![Language](https://img.shields.io/badge/language-C-blue)
![Standard](https://img.shields.io/badge/standard-C11-orange)
![Build](https://img.shields.io/badge/build-Makefile-green)
![Data Structure](https://img.shields.io/badge/data_structure-array%2Fheap-yellow)
![Algorithm](https://img.shields.io/badge/algorithm-comparison-lightgrey)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

---

## Visão geral

Neste projeto, comparei os algoritmos ***Heap Sort*** e ***Insertion Sort*** utilizando uma **biblioteca estática única** que contém ambas as implementações.

A ideia foi direta:

> aplicar os dois algoritmos sobre os mesmos dados e medir o tempo real de execução

Aqui o foco não é implementar — é **comparar comportamento na prática**.

---

## O que foi feito

* Uso de uma biblioteca estática própria contendo:

  * *Heap* + *Heap Sort*
  * *Insertion Sort*
* Geração de dados aleatórios
* Execução dos dois algoritmos sobre o **mesmo conjunto de dados**
* Medição de tempo com `clock_gettime` (*CLOCK_MONOTONIC*)
* Comparação direta de desempenho

---

## Estruturas utilizadas

* *Heap* para execução do *Heap Sort*
* *Array* dinâmico para execução do *Insertion Sort*

Os dois recebem exatamente os mesmos valores para manter a comparação justa.

---

## Algoritmos

### *Heap Sort*

* Baseado em *Max-Heap*
* Ordenação *in-place*
* Complexidade:

  * Tempo: `O(n log n)`
  * Espaço: `O(1)`

---

### *Insertion Sort*

* Ordenação incremental
* Simples, mas não escalável
* Complexidade:

  * Tempo: `O(n^2)`
  * Espaço: `O(1)`

---

## Medição de tempo

Utilizei `clock_gettime` com `CLOCK_MONOTONIC`, garantindo medições confiáveis:

```c
double executionTimeHeapSort = executionTimeCalculate(heapSortWrapper, arrayHeapSort);
executionTimePrint(executionTimeHeapSort);

double executionTimeInsertionSort = executionTimeCalculate(insertionSortWrapper, arrayInsertionSort);
executionTimePrint(executionTimeInsertionSort);
```

Exemplo:

```
Heap Sort       - Tempo de execução: 0 H : 0 M : 0 S : 12 ms
Insertion Sort  - Tempo de execução: 0 H : 0 M : 3 S : 542 ms
```

---

## Estrutura do projeto

```
Compare-Sorts/
│
├── app/             # Aplicação principal (main)
├── bin/             # Executável
├── include/         # Headers da biblioteca (.h)
├── lib/             # Biblioteca estática (.a)
│
├── Makefile         # Build e linkagem
├── README.md        # Documentação
└── LICENSE          # Licença
```

---

> [!IMPORTANT]
>
> ## Requisitos
>
> * **GCC ou Clang**
> * **GNU Make**
> * Sistema **Linux ou macOS**

---

## Instalação

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

## Limpeza

```bash
make cleanapp
```

---

## Observação importante

Executando ambos sobre o mesmo conjunto de dados, fica claro:

* *Heap Sort* escala bem
* *Insertion Sort* cresce rápido demais

Esse projeto deixa evidente a diferença entre `O(n log n)` e `O(n^2)` no mundo real.

---

> [!WARNING]
>
> ## Licença
>
> Este projeto está sob a **Licença MIT**.

---

## Autor

**Natam Leão Ferreira**

Conclusão: **2026**

---