# AEDS1: Listas de Exercícios

## Lista -- Prova 2: Funções, Arquivos e Structs

### Funções

1. Escreva uma função que recebe um vetor salva o menor elemento em um
   endereço passado por referência:
   ```c
   void menor(int n, int vetor[n], int *menor_aqui);
   ```

1. Escreva um algoritmo que determina se um número inteiro é primo.
   ```c
   int eh_primo(int x);
   ```

1. Escreva uma função que aproxima o logaritmo de um número inteiro para um
   número outro inteiro cujo valor é próximo do log real. Isto é, arredonde o
   valor de log para cima ou para baixo. Por exemplo log<sub>3</sub>10 = 2.09.
   Você pode retornar 2 ou 3. Qual a complexidade da sua função?
   ```c
   int log_tosco(int number, int power);
   ```
   Não utilize a `math.h` ou qualquer biblioteca externa. Código C apenas.

1. Escreva uma função que retorna os *x* menores números de um vetor. Quando
   *x=1*, retornamos apenas o menor número. Quando *x=2* retornamos os dois
   menores. Um ponteiro para um vetor pode ajudar.
   ```c
   void x_menores(int n, int vec[n], int x, seus_parametros_aqui);
   ```

1. Escreva um algoritmo que compacta uma string. A compactação de uma string
   é uma operação que simplesmente conta o número de ocorrências de letras na
   string retornando uma nova string de tamanho menor. Por exemplo, a string:
   ``` aaaaabcdddeeeffffff   abc```

   É compactada para:
   ```a5b1c2d3e3f6 3a1b1c1```

   Sua função deve ter uma assinatura como:
   ```c
   char *compacta(char *string)
   ```

   Escreva também a função inversa
   ```c
   char *descompacta(char *string)
   ```

1. Escreva um programa que contenha uma função com a seguinte assinatura:
   ```c
   int dados_triang(float a, float b, float c, float *area, float *perímetro);
   ```

   A função deverá receber por valor as medidas de 3 segmentos de reta, a, b e
   c.  Caso seja possível formar um triângulo, a função deverá retornar 1 (por
   meio do comando return) e os parâmetros `area` e `perimetro`, passados por
   referência, deverão receber os respectivos valores referentes ao triângulo.
   Caso não seja possível formar um triângulo, a função deverá retornar 0 e os
   parâmetros `area` e `perimetro` deverão também receber valor 0.

   O programa deverá receber a medida dos 3 segmentos e deverá informar ao
   usuário se é possível formar um triângulo ou não. O programa também deverá
   informar o valor da área e do perímetro do triângulo. Caso não seja possível
   formar um triângulo, o programa deverá informar `area=0` e `perimetro=0`.

1. Escreva uma função para calcular o valor da seguinte função harmônica
   h(x) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/x, para um inteiro x positivo (n>0).

### Arquivos

Os problemas de arquivos fazem uso de `argc` e `argv`.

1. Faça um programa que recebe o nome de um arquivo de texto da linha de comando
   e imprime o mesmo na tela. Crie um arquivo de texto em 2 locais e teste seu
   programa: (1) na pasta do programa; (2) na sua pasta Desktop (área de trabalho).
1. Modifique o programa para gera a cópia do arquivo. Isto é, recebe um outro caminho
   para salvar um arquivo que é uma cópia do anterior.
1. Um conceito bastante utilizado na álgebra linear é o de norma de matrizes e
   vetores. Então, vamos iniciar definindo uma matriz *X*:
   
   ![Matriz](matriz.png)
   
   A matriz *X* acima tem n-linhas e m-colunas. Escreva **três**
   funções diferentes. Cada função é definida como uma norma de uma matriz.
   Em particular, você vai implementar a norma um, norma infinito e norma
   frobenius.
   
   Para mais informações veja o Wikipedia:
   https://en.wikipedia.org/wiki/Matrix_norm

   **Norma Um**
   
   ![Norma1](normaum.png)
   
   Soma da maior coluna que tem a maior soma.

   **Norma Infinito**
   
   ![NormaInf](normainf.png)
   
   Soma da maior linha que tem a maior soma.

   **Norma Frobenius ao Quadrado**
   
   ![NormaFro](normfro.png)
   
   Soma de todos os elementos elevados ao quadrado.

   Agora, faça um programa com três funções para cada norma acima. O mesmo vai
   fazer uso de um arquivo passado pela linha de comando. A primeira linha do
   arquivo indica o número de casos. Isto é, se a primeira linha for `5`, você vai
   computar as três normas acima para 5 matrizes. Após a primeira linha, será
   indicado o tamanho da primeira matriz (n-linhas e m-colunas). Cada uma das
   próximas n-linhas será uma linha da matriz (cada linha com m-colunas). Após
   n-linhas, o tamanho da matriz seguinte será indicado. O processo se repete até
   você ler todos os casos de teste (5 no exemplo acima).

   Para cada caso de teste você deve escrever um arquivo de saída. Tal arquivo vai
   conter em cada linha 3 colunas indicado as três normas de cada matriz do caso de
   teste. Abaixo segue um exemplo:
  
   **a) Os números sempre serão inteiros**
   
   **b) O arquivo de entrada se chama entrada.txt e encontra-se nesta pasta**
  
   | *Entrada* `entrada.txt` | Saída             |
   |-------------------------|-------------------|
   |3                        | 101 112  18552    |
   |2 4                      | 8 7 84            |
   |1 -1 90 20               | 7 7 49            |
   |0 -100 1 -7              |                   |
   |3 5                      |                   |
   |0 0 0 -3 0               |                   |
   |0 -7 0 0 0               |                   |
   |0 0 1 5 0                |                   |
   |1 1                      |                   |
   |7                        |                   |


### Structs

1. Crie uma estrutura para representar as coordenadas de um ponto no plano
   (posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba
   a distância entre eles.

1. Crie uma estrutura chamada `retangulo_t`. Essa estrutura deverá conter o
   ponto superior esquerdo e o ponto inferior direito do retângulo. Cada ponto
   é definido por uma estrutura Ponto, criada no exercício anterior. Faça um
   programa que declare e leia uma estrutura `retangulo_t` e exiba a área, o
   comprimento da diagonal e o perímetro desse retângulo.

1. Usando as estruturas `retangulo_t` e Ponto dos exercícios anteriores, faça
   um programa que declare e leia uma estrutura `retangulo_t` e um `ponto_t` e
   informe se esse ponto está ou não dentro do retângulo.

1. Crie uma estrutura `aluno_t` representando um aluno de uma disciplina. Essa
   estrutura deve conter o número de matrícula do aluno, seu nome e as notas de
   três provas. Agora, escreva um programa que leia os dados de cinco alunos e
   os armazena nessa estrutura. Em seguida, exiba o nome e as notas do aluno
   que possui a maior média geral dentre os cinco.

1. Crie uma estrutura `hora_t` representando uma hora. Essa estrutura deve
   conter os campos hora, minuto e segundo. Agora, escreva um programa que leia
   um vetor de cinco posições dessa estrutura e imprima a maior hora.

1. Crie uma estrutura `atleta_t` representando um atleta. Essa estrutura deve
   conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um
   programa que leia os dados de cinco atletas.  Calcule e exiba os nomes do
   atleta mais alto e do mais velho.

1. Usando a estrutura `atleta_t` do exercício anterior, escreva um programa que
   leia os dados de cinco atletas e os exiba por ordem de idade, do mais velho
   para o mais novo.

1. Escreva um programa que contenha uma estrutura `data_t` representando uma
   data válida. Essa estrutura deve conter os campos “dia”, “mês” e “ano”. Em
   seguida, leia duas datas e armazene nessa estrutura. Calcule e exiba o
   número de dias que decorreram entre as duas datas.
