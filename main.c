#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 300000

int GeneraNumeros(int Arreglo[N]);
void Imprimir(int Arreglo[N]);
void Seleccion(int Arreglo[N]);
void Intercambio(int *A, int *B);

int main()
{
    srand(time(0));
    int Arreglo[N],*A,*B;
    int d,e,f;
    printf("Intercambio Directo(Metodo de la SELECCION)\n");

    GeneraNumeros(Arreglo);
    d=time(0);
    //  Imprimir(Arreglo);
    Seleccion(Arreglo);
    e=time(0);
    f=e-d;
    //  Imprimir(Arreglo);
    printf("\n--------\n");
    getch();
    printf(" El tiempo es: %d",f);

    printf("\n --------\n");


}

int GeneraNumeros(int Arreglo[N])
{
    int x;
    for(x=0;x<N;x++)
    {
        Arreglo[x] = rand()%25;
    }
}

/*void Imprimir(int Arreglo[N])
{
    int x;
    for(x=0;x<N;x++)
    {
        printf("El arreglo es: %d\n",Arreglo[x]);
    }
} */

void Seleccion(int Arreglo[N])
{
    int x,y,min;
    for(x=0;x<N;x++)
    {
    min=x;
        for(y=x+1;y<=N;y++)
        {
            if(Arreglo[y]<Arreglo[min])
            {
                min=y;
            }
        }
    Intercambio(&Arreglo[x],&Arreglo[min]);
    }
}

void Intercambio(int *A, int*B)
{
    int cambio;
    cambio = *A;
    *A = *B;
    *B = cambio;
}
