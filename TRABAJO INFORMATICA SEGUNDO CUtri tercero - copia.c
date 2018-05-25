#include <stdio.h>
void imprime(char mensaje[], char nombre[]);
void main(){
	char respuesta;
	imprime("Empieza el segundo cuatrimesre \n", "Segundo cuatrimestre 3anno.txt");
	do
	{
		printf("Como crees que va ir l cuatrimestre? Bien (b) Regular(r) Mal (m) \n");
		scanf("%c", &respuesta);	
	}while(respuesta!='b' && respuesta!='r' && respuesta!='m');
	switch (respuesta){
	case('b'):{
		printf("Te reconcilias con tu pareja \n");
		printf("En la universidad todo te va bien \n");
		printf("Te ofrecen una beca para irte de Erasmus \n");
		break;
	}
	case('r'):{
		printf("Realmente todo era un sueño en el que estabas sumergido\n");
		printf("Te despiertas del sueño pero vuelves a sumegirte dentro de nuevo\n"); 
		printf("Como crees que va ir l cuatrimestre? Regular(r) Mal(m) \n");
		scanf("%c", &respuesta);
		printf("No te va del todo mal en la universidad  \n");
		printf("Finalmente acabas la universidad pero acabas descubriendo que tienes cancer \n");
		break;
	}
	case('m'):{
		printf("Dejas la universidad \n");
		printf("Entras en depresion \n");
		break;
	}	
}
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
