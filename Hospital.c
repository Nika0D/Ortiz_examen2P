#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=0;
    srand(time(NULL));
    /*MATRIZ A ES INGRESOS B EGRESOS*/
    int matA[30][12];
    int matB[30][12];
    for (int i = 0; i < 30; i++)
        {
        for (int j = 0; j < 12; j++)
        {
            matA[i][j]=rand()%51;
            matB[i][j]=rand()%51;
        }
    }
    printf("ingrese la opcion 1 o 2");
    scanf("%d", &n);
    if (n==1)
    {
        printf("Ingresos\n");
        for (int i = 0; i < 30; i++)
        {
            printf("Producto %d:", i + 1);
            for (int j = 0; j < 12; j++)
            {
                printf(" %d ", matA[i][j]);
            }
            printf("\n");
        }
        printf("Egresos\n");
        for (int i = 0; i < 30; i++)
        {
            printf("Producto %d:", i + 1);
            for (int j = 0; j < 12; j++)
            {
                printf(" %d ", matB[i][j]);
            }
            printf("\n");
        }
    }else if (n==2)
    {
        printf("Suma de ingresos\n");
        for (int i = 0; i < 30; i++)
        {
            int sumaFila = 0;
            for (int j = 0; j < 12; j++) 
            {
                sumaFila += matA[i][j];
            }
            printf("Producto %d: %d\n", i + 1, sumaFila);
        }
        printf("Suma de egresos\n");
        for (int i = 0; i < 30; i++)
        {
            int sumaFila = 0;
            for (int j = 0; j < 12; j++) 
            {
                sumaFila += matB[i][j];
            }
            printf("Producto %d: %d\n", i + 1, sumaFila);
        }
    }
}