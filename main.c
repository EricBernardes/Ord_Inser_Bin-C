#include <stdio.h>
#include <time.h>
#define max 5

void OrdBinaria(int *v) {
  int aux = 0;
  int esq;
  int dir;
  int meio;
  for (int i = 1; i < max; i++) {
    aux = v[i];
    esq = 0;
    dir = i - 1;
    while (esq <= dir) {
      meio = (esq + dir) / 2;
      if (v[meio] <= aux) {
        esq = meio + 1;
      } else {
        dir = meio - 1;
      }
    }
    for (int j = i; j > esq; j--) {
      v[j] = v[j - 1];
    }
    v[esq] = aux;
  }
}

void imprimeVetor(int *v) {
  for (int i = 0; i < max; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
}

int main() {
  int v[5] = {5, 2, 1, 3, 4};
  OrdBinaria(v);
  imprimeVetor(v);
  return 0;
}
