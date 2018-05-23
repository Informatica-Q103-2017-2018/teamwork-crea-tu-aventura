#include <stdio.h>
void imprime(char mensaje[], char nombre[]);
char dowhile(char op);
void main()
{
	char respuesta;
	int m,n,c;
	imprime("Empiezas tercero y conoces a un latin lover llamado Max es muy simpatica quizas te ayude en algo.\n Ademas de eso resulta que no hay buen rollo con tu novia tu eres el que decide que pasara\n","tercerañoinicio.txt");
	printf("Quieres terminar con ella?");
	c=dowhile(respuesta);
	if(c=='s')
	{
	 printf("Pierdes reputacion y ganas inteligencia, en los estudios quizas vayas bien pero el sentimiento de soledad te acompanha\n");
	 m=m+2;
	 n=n-2;
	}
	else
	{
	 printf("Ganas reputacion pero pierdes inteligencia, ahora estas que te lo comes todo y te sientes acompanhado a ver que tal ira con tus estudios\n");
	 m=m-2;
	 n=n+2;
	}
	imprime("Independientemente de las decisiones que hayas tomado obtienes una notas malas por la duda existencial que tiene. Estas notas son:\n Informatica 3\n Resistencia de materiales 2\n Ingles(Optativa) 4\n","notasfinales");
}

void imprime(char mensaje[], char nombre[])
{
	FILE *pf;
	pf=fopen(nombre,"a");
	if (pf==NULL)
	{
		printf("Error al abrir el fichero\n");
	}
	else
    {
    	fprintf(pf,"%s",mensaje);
    	fclose(pf);
    	printf("%s",mensaje);
    }
	
}
char dowhile(char op)
{
	do
	{
	printf("Escribe Si (s) o No (n): ");
	scanf(" %c", &op);
    }
	while(op!='s' && op!='n');
	return op;
}
