#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define lb 0.4536
#define pe 0.3048

#define Medida(x) (((x)*(pe)))
#define Peso(y) (((y)*(lb)))


//Crie macros em C que façam as conversões de medida e pesos americanos para as medidas europeias.

int main()
{
    float  x, y;
    setlocale(LC_ALL ,"Portuguese");
    printf("Insira o peso em libras para converter para quilos: \n");
    scanf("%f",&y);
    printf("Insira a medida em pés para converter para metros: \n");
    scanf("%f",&x);
    printf ("\t CONVERSÕES:\n");
    printf("%.4f kg\n",Peso(y));
    printf("%.4f metros",Medida(x));



    return 0;
}
