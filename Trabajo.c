#include<stdio.h>
#define N 50
void imprime(char mensaje[], char nombre[]);
void main()
{ int reputacion, inteligencia, salud;
	char respuesta;
	do
	{
		printf("Hay una charla informativa,�quieres ir? (si(s) o no(n)) \n");
		scanf("%s", &respuesta);
	} while(respuesta!='s' && respuesta!='n');

	if(respuesta=='s')
	{
		printf("Te sientas al lado de Fermin �quiereis ser amigos? (si o no)\n");
		scanf("%s",&respuesta);
		if(respuesta=='s')
			printf("Te ayudara en Amplicion de matematicas");
		else
			printf("No te ayudara jamas y sera  tu peor enemigo");
		
	}	
	else
		printf("Al dia siguiente no encuentras tu clase y llegas tarde\n");

	printf("Tu primer dia ha acabado\n");
   imprime("Han pasado unos dias y Fermin te invita a una fiesta: ","Segundodia.txt");
   char respuesta2;
   printf("Decides ir? {Si(s) o No(n)?}\n");
   scanf("%s", &respuesta2);
      if(respuesta2=='s')
        {   reputacion++;
		int numero;
		 printf("Al llegar conoces a la gente de la Uni que decidio ir y te lo pasas bien pero...\n ");
             printf("Elige un n�mero: Beber (1), Aceptar fumar con unos chicos (2), Hablarle a quien te interesa en la fiesta (3)\n");
             scanf("%d", &numero);
         	   switch(numero)
			      {
			 	    case 1: printf("Te emborrachas demasiado. Te despiertas a las 14 de la tarde suspendiendo asi el examen que tenias a las 11:45.\n"); 
			 	            break;
			 	    case 2: printf("Fumaste uno y luego mas porros, fuiste fumado a hacer el examen y ni tu nombre pusiste bien.\n");
			 	            inteligencia=inteligencia-1;
			 	            break;
			        case 3: printf("Te ligaste a una chica pero se durmio y no pudiste llegar a mas. Aun asi todos en la Uni se enteraron y pudiste dormir y hacer el examen\n");
			                reputacion=reputacion+3;
			                break;
			        default: printf("Dios sabe que habra pasado...");
			                break;
			 	
			      }
        }
  
}

void imprime(char mensaje[], char nombre[])
{
	FILE *pf;
	pf=fopen(nombre,"w");
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
