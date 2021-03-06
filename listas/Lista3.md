# Lista 3: Recursividade e Ponteiros

## Ponteiros

1. Escreva uma função que troca 2 elementos usando passagem por referência. Isto é, o conteúdo apontado por `x` vira o conteúdo apontado por `y` (não troque os endereços, troque o conteúdo).
```c
void troca(int *x, int *y)
```

1. Em sala, aprendemos sobre listas encadeadas. Na nossa lista, apenas inserimos elementos no lado esquerdo ou direito (inicio ou fim). Mude o código da simples simplesmente e duplamente encadeada para:
   1. Inserir um elemento em uma dada posição `i`. Isto é, se a lista for `[1, 2, 5, 23]` e inserimos `7` na posição `2` a
      mesma vira `[1, 2, 7, 5, 23]`
   1. Remover um elemento da posição `i`. Removendo `i=2`, ficamos com a lista original.
   
## Recursividade

1. Escreva uma função recursiva que calcule a soma dos primeiros n cubos: S = 1³ + 2³ + ... + n³

1. Escreva um procedimento recursivo para imprimir todos os números naturais de 0 até N em  ordem crescente.

1. Escreva um procedimento recursivo para imprimir todos os números naturais de 0 até N em  ordem decrescente.

1. Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.

1. Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.

1. Escreve uma função recursiva que receba por parâmetro dois valores inteiros x e y e calcule e retorne o resultado de x^y (x elevado a y) para o programa principal.

1. Escreva uma função que recebe uma  string como parâmetro e a imprima invertida.

1. Escreva uma função recursiva que receba um valor inteiro x e o retorne invertido. Exemplo: se  x = 123, a função deve retornar 321.

1. Escreva uma função recursiva que receba um valor inteiro em base decimal e o imprima em  base binária.

1. Escreva uma função recursiva que retorne o menor elemento em um vetor.

1. Usando o esqueleto abaixo, implemente a função flood-fill de forma recursiva. A sua função vai funcionar de
   forma similar ao "balde" do paint:
   ![exemplo](https://upload.wikimedia.org/wikipedia/commons/7/7e/Recursive_Flood_Fill_4_%28aka%29.gif).

   Isto é, você deve preencher as entradas BRANCO de LARANJA sem mudar as outras cores.
```c
#include <stdio.h>

#define BRANCO  0
#define PRETO   1
#define LARANJA 2

void flood_fill(int n, int mat[n][n], int i, int j) {
   // . . .
}

int main(void) {
  int n = 9;
  int mat[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      mat[i][j] = 0;

  // primeira linha é tudo PRETO
  mat[0][0] = PRETO;
  mat[0][1] = PRETO;
  mat[0][2] = PRETO;
  mat[0][3] = PRETO;
  mat[0][4] = PRETO;
  mat[0][5] = PRETO;
  mat[0][6] = PRETO;
  mat[0][7] = PRETO;
  mat[0][8] = PRETO;

  // Ultima linha também
  mat[8][0] = PRETO;
  mat[8][1] = PRETO;
  mat[8][2] = PRETO;
  mat[8][3] = PRETO;
  mat[8][4] = PRETO;
  mat[8][5] = PRETO;
  mat[8][6] = PRETO;
  mat[8][7] = PRETO;
  // mat[8][8] = PRETO;

  // primeira coluna é tudo PRETO
  mat[0][0] = PRETO;
  mat[1][0] = PRETO;
  // mat[2][0] = PRETO; deixar só 1 brecha
  mat[3][0] = PRETO;
  mat[4][0] = PRETO;
  mat[5][0] = PRETO;
  mat[6][0] = PRETO;
  mat[7][0] = PRETO;
  mat[8][0] = PRETO;

  // ultima coluna é tudo PRETO
  mat[0][8] = PRETO;
  mat[1][8] = PRETO;
  mat[2][8] = PRETO;
  mat[3][8] = PRETO;
  mat[4][8] = PRETO;
  // mat[5][8] = PRETO; deixar só 1 brecha
  mat[6][8] = PRETO;
  mat[7][8] = PRETO;
  // mat[8][8] = PRETO;

  mat[6][1] = PRETO;
  mat[7][2] = PRETO;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  flood_fill(n, mat, 4, 4);
  printf("\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}
```
1. Dado um vetor de elementos indexados de 0 até n-1. Uma forma simples de ordenar um número é seguir os passos abaixo:
```
dado um vetor v de tamanho n
i = 0
equanto i < n:
   Ache o menor número de um vetor entre `[i, n)`
   Coloque tal número na primeira posição `i` (troque o mesmo com v[i])
   i += 1
```
Crie uma função que acha o menor elemento a partir de uma posição `i` de um vetor. Após isto, faça um programa recursivo
para ordenado o mesmo.
```c
#include <stdio.h>
#include <stdlib.h>

int min(int i, int n, int v[n]) {
  // acha o menor elemento do vetor ignorando tudo antes de i
  // n é o tamanho

  if (i >= n) {
    printf("erro");
    exit(1);
  }
  // . . .
  return 0;
}

void troca(int i, int j, int n, int v[n]) {
  // troca a posição i com a posição j do vetor
  // n é o tamanho
}

void ordena(int i, int n, int v[n]) {

}

int main(void) {

  return 0;
}
```

1. Problemas mais complicados dos slides.


## Recursividade + Ponteiros!

1. Usando o esqueleto abaixo, implemente uma função recursiva que encontra um elemento em uma lista encadeada. Isto é, se a lista contém os elementos `["didi", "dede", "mussum", "zacarias"]` e a entrada da função for `"dede"` seu código deve retornar `1`. Caso o elemento não exista, o código deve retornar `-1`.
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct no {
  struct no *prox;
  char *valor;
} no_t;


int acha_elemento(no_t *no, char *elemento) {
  // seu código aqui
  // lembre-se que a função strcmp pode ser usada para comparar 2 strings
  // quando 2 strings são iguais strcmp(s1, s2) == 0.
  // se s1 < s2 (ordenação alfabética) strcmp(s1, s2) < 0;
  // senão strcmp(s1, s2) > 0.
  // . . .
  return -1;
}


no_t *insere(no_t *ultimo, char *valor) {
  no_t *no = (no_t *) malloc(sizeof(no_t));
  if (no == NULL) {
    printf("erro de memória\n");
    exit(1);
  }
  no->prox = NULL;
  no->valor = valor;
  if (ultimo != NULL)
    ultimo->prox = no;
  return no;
}


void libera_tudo(no_t *no) {
  no_t *primeiro = no;
  no_t *aux;
  while (primeiro != NULL) {
    aux = primeiro->prox;
    free(primeiro);
    primeiro = aux;
  }
}


int main(void) {
  no_t *primeiro = insere(NULL, "didi");
  no_t *ultimo = insere(ultimo, "mussum");
  ultimo = insere(ultimo, "zacarias");
  ultimo = insere(ultimo, "dede");

  int pos = acha_elemento(primeiro, "zacarias");
  if (pos > -1) printf("Achei zacarias na posição %d!\n", pos);
  else printf("não achei zacarias :(\n");

  pos = acha_elemento(primeiro, "dede");
  if (pos > -1) printf("Achei dede  na posição %d!\n", pos);
  else printf("não achei dede :(\n");

  pos = acha_elemento(primeiro, "moe");
  if (pos > -1) printf("Achei moe na posição %d!\n", pos);
  else printf("não achei moe :(\n");
  
  libera_tudo(primeiro);

  return 0;
}
```
