#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define C 5
int main(){
    int p;
    char *buffer;
    char *v[C];

    for (int i = 0; i < C; i++)
    {
        printf("ingresa un nombre:");
        gets(buffer);

        p = strlen(buffer); 

        v[i]=malloc(sizeof(char)*p); //almaceno el tamaño de cada una de las cadenas

        strcpy(v[i], buffer); //copio la cadena almacenada en buffer al vector v
    }
    
    for (int z = 0; z < C; z++)
    {
        puts(v[z]);
    }
    

    return 0;
}