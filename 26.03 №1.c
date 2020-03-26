#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define M 5 /* Число строк матрицы */
#define N 5 /* Число столбцов матрицы */

int main()
{
  int a[M][N];
  int i, j;
  int min=INT_MAX;

    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
            a[i][j] = rand()%100;
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++)
            printf("%5d", a[i][j]);
      printf("\n");}

    printf("\n");
    for (j=0; j<N; j++) {
        for (i=0; i<M; i++){
            if (a[i][j] < min)
                min = a[i][j];}
    printf("%5d", min);
      }
  return 0;
}
