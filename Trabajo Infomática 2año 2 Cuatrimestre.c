#include <stdio.h>
char dowhile(char op);
void imprime(char mensaje[], char nombre[]);
void main()
{
	char respuesta;
	int n,m, a4;
	// n es la reputacion y m es la inteligencia
	imprime("Empieza el segundo cuatrimesre \n", "Segundo cuatrimestre 2anno.txt");
	imprime("Inesperadamente, te empieza a gustar uno de tus amigos \n", "Segundo cuatrimestre 2anno.txt");

	
	
		printf("Quieres una relacion seria con esa persona? \n");
		a4=dowhile(respuesta);
			
	if(a4 == 's'){
		printf("Empiezas una relacion con esa persona\n");
		n=n+2;
		}
	else{
		printf("Intentas pasar pagina pero al final comienzas la relacion en verano \n");
		n=n+1;
	}
	imprime("Tu segundo anno de carrera ha acabado", "Segundo cuatrimestre 2anno.txt");
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
