#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include <time.h>

char *TiposProductos[]={"Galletas","Snack","Cigarrillos","Caramelos","Bebidas"};

struct Producto {
int ProductoID; //Numerado en ciclo iterativo
int Cantidad; // entre 1 y 10
char *TipoProducto; // Algún valor del arreglo TiposProductos
float PrecioUnitario; // entre 10 - 100
}typedef produ;  

struct Cliente {
int ClienteID; // Numerado en el ciclo iterativo
char *NombreCliente; // Ingresado por usuario
int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
struct Producto *Productos ;//El tamaño de este arreglo depende de la variable "CantidadProductosAPedir"
}typedef cli;

void calcularCosto(produ Productos);


int main(){
    srand(time(NULL));

    int cantClien;
        

    printf("ingrese la cantidad de clientes a visitar (maximo 5):");
    scanf("%d", &cantClien);

    cli * punt = (cli*)malloc(sizeof(cli)*cantClien);

    for (int i = 1; i < cantClien+1; i++)
    {
        punt[i].ClienteID=i;

        char *nombre =(char *)malloc(sizeof(nombre)*sizeof(char));
        printf("\ningrese nombre del cliente: ");
        scanf("%s", nombre);
        punt[i].NombreCliente = nombre;

    

        punt[i].CantidadProductosAPedir= 1+rand()%5;
        
        printf("\n-----CLIENTE N°%d-----", i);
        printf("\nNombre del cliente: %s", punt[i].NombreCliente);
        printf("\nCantidad de productos a pedir: %d", punt[i].CantidadProductosAPedir );
        
        punt[i].Productos=(produ *)malloc(punt[i].CantidadProductosAPedir * sizeof(produ));//  asignacion de memoria dinamica del arreglo de productos


        for (int z= 1; z < punt[i].CantidadProductosAPedir+1; z++)
        {
            punt[i].Productos[z].ProductoID = z;
            punt[i].Productos[z].Cantidad = 1+rand()%11;
            punt[i].Productos[z].TipoProducto = TiposProductos[rand()%5];
            punt[i].Productos[z].PrecioUnitario = 10+rand()%91;

            printf("\nproducto N°%d", z);
            printf("\ncantidad de productos:%d", punt[i].Productos[z].Cantidad);
            printf("\ntipo de producto: %s", punt[i].Productos[z].TipoProducto );
            printf("\nprecio unitario del producto: %f", punt[i].Productos[z].PrecioUnitario);

            calcularCosto(punt[i].Productos[z]);
        }
        free(punt[i].Productos);
    }

    
    free(punt);    
    
    return 0;
}


void calcularCosto(produ Productos){
   float resul = Productos.Cantidad*Productos.PrecioUnitario;
   printf("\nEl costo total del producto es: %f", resul);
}