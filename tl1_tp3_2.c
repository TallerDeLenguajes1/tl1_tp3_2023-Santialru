#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 12

// void Promedio(int Matr[]);

int main(){
    srand(time(NULL));
    
    int mayor, bandera =0,bandera2=50000,b,v,h,g;
    int mat[N][M];
        

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
            printf(" %d ", mat[u][x]);
        }
            printf("\n");
    }
    

    long int suma=0, prom;
    for (int w = 0; w < N; w++)
    {
        for (int y = 0; y <M ; y++)
        {
            if (mat[w][y]>bandera )
            {
                bandera=mat[w][y];
                b = w;
                v = y;
            }
            if (bandera2 > mat[w][y] )
            {
                bandera2 = mat[w][y];
                h = w;
                g = y;
            }

            suma += mat[w][y];
        }
        prom = suma/M;
        printf("\npromedio del año %d = %ld", w, prom);
        suma=0;
    }

    printf("\nvalor maximo:%d, anio:%d, mes:%d", mat[b][v], b, v);
    printf("\nvalor minimo:%d, anio:%d, mes:%d", mat[h][g], h, g);

    return 0;
}


// void Promedio(int Matr[]){
//     long int suma=0, prom;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j <M ; j++)
//         {
//             suma += Matr[i][j];
//         }
//         prom = suma/M;
//         printf("\npromedio del año %d = %ld", i, prom);
//         suma=0;
//     }
    
// }