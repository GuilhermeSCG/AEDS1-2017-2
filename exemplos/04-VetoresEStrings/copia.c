#include <stdio.h>

void copia (char destino[], char fonte[]) {
  /* Completar */
}

int main () {
  char t_um[50] = "Eu sou o texto um. Um texto mais comprido.";
  char t_dois[50] = "Eu sou o texto dois.";

  printf ("Valor de t_um antes da cópia:\n");
  puts(t_um);

  copia (t_um, t_dois);

  printf ("Valor de t_um depois da cópia:\n");
  puts(t_um);

  return 0;
}
