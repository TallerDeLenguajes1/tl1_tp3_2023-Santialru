#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 12


int main(){
    srand(time(NULL));
    

    long int mat[N][M];
        

    for (int i = 0; i < N; i++)
    {
        for (int z = 0; z < M; z++)
        {
           mat[i][z]=10000+rand()%50000;
        }
    }

    for (int u = 0; u < N; u++)
    {
        for (int x = 0; x < M; x++)
        {
            printf(" %ld ", mat[u][x]);
        }
            printf("\n");
    }
    

    return 0;
}