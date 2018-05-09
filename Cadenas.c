#include <stdio.h>
int main()
{
char cadena[5] = "Hola";
// Distancia entre A y a
int inc = 'A' - 'a';
int i = 0;
// Recorremos la cadena
while(cadena[i] != '\0')
{ // Si el caracter es letra minuscula
if (cadena[i] >= 'a' && cadena[i] <= 'z')
//sumamos la distancia para pasar a
//mayuscula
cadena[i] += inc;
i++;
}
printf(" %s\n", cadena);
return 0;
}
