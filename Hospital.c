#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=999;
    srand(time(NULL));
    /*MATRIZ A ES INGRESOS B EGRESOS*/
    int matA[30][12];
    int matB[30][12];
    int matC[30][12];
    for (int i = 0; i < 30; i++)
        {
        for (int j = 0; j < 12; j++)
        {
            matA[i][j]=rand()%51;
            matB[i][j]=rand()%51;
        }
    }
    for (int i = 0; i < 30; i++)
        {
        for (int j = 0; j < 12; j++)
        {
            matC[i][j]=matA[i][j]+matB[i][j];
        }
    }
    printf("ingrese la opcion 1 o 2");
    scanf("%d", n);
    if (n==1)
    {
        printf("Ingresos\n");
        for (int i = 0; i < 30; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                printf(" %d ", matA[i][j]);
            }
            printf("\n");
        }
        printf("Egresos\n");
        for (int i = 0; i < 30; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                printf(" %d ", matB[i][j]);
            }
            printf("\n");
        }
    }else if (n==2)
    {
        for (int i = 0; i < 30; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                for (int i = 0; i < 30; i++) {
                int sumaF = 0;

            }
        }
    }
    
       
    

    return 0;
}