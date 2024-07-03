/*
Autor:
Fecha:
Tema: Ordenacion secuencial
*/
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
//Ordena el vector usando el algoritmo de ordenacion secuencial

void Ordensecuencial(int x[],int total)
{

}
for (int k=0; < total; k++)
{
for (int j=k+1; j < total; j++)
{
    if(x[k]> x[j])
    {
        //intercambiar los valores
        int aux = x [k];
        x[k] = x[j];
        x[j] = aux;
      }
  }
 }
 
void ImprimeVector (int x[], int total){
    for (int x=0; x < total;x++)
    {
        cout<<endl<<x[x];
    }
}
//llenar el vector con numeros aleatorios
void VectorNumAleatorios(int x[],int total)

{
    int lim_inf=1;
    int lim_sup = 100;
    for (int k=0; k < total; k++)
{
    int numero = lim_inf + rand () % ((lim_sup+1)-lim_inf );
    x [k] = numero;
}
    srand (time(NULL));
const int MAX =50;
//int x[] = {10, 6 , 34 , 4, 2, 7, 15};
int x [MAX];
    const int MAX = 7;
    int x []= {10, 6 , 34 , 4, 2, 7, 15};
    ImprimeVector (x,MAX); //imprime el vector original
    Ordensecuencial(x,MAX);
    ImprimeVector(x, MAX); //imprime el vector ordenado

    return 0;
}