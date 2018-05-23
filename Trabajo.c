#include<stdio.h>
#define N 50
void imprime(char mensaje[], char nombre[]);
char dowhile(char op);
void main()
{ int  n, m, salud;
	char respuesta;
	   printf("Hay una charla informativa,¿quieres ir? (si(s) o no(n)) \n");
		int a1;
         a1=dowhile(respuesta);
	   if(a1=='s')
	   {
		printf("Te sientas al lado de Fermin ¿quiereis ser amigos? (si o no)\n");
		int a2;
		
		a2=dowhile(respuesta);
		if(a2=='s')
			printf("Te ayudara en Amplicion de matematicas\n");
		else
			printf("No te ayudara jamas y sera  tu peor enemigo.\n");
		
	   }	
	else
		printf("Al dia siguiente no encuentras tu clase y llegas tarde\n");

 printf("Tu primer dia ha acabado\n");
imprime("Han pasado unos dias y Fermin te invita a una fiesta. Quieres ir?: ","Segundodia.txt");
   int a3;
     a3=dowhile(respuesta);
     if(a3 =='s')
        {   n++;
		int numero;
		 printf("Al llegar conoces a la gente de la Uni que decidio ir y te lo pasas bien pero...\n ");
             printf("Elige un numero: Beber (1), Aceptarle un porro a alguien (2), Intentar ligar (3)\n");
             scanf("%d", &numero);
         	   switch(numero)
			      {
			 	    case 1: printf("Te emborrachas demasiado. Te despiertas a las 14 de la tarde suspendiendo asi el examen que tenias a las 11:45.\n"); 
			 	            break;
			 	    case 2: printf("Fumaste uno y luego mas porros, fuiste fumado a hacer el examen y ni tu nombre pusiste bien.\n");
			 	            m=m-1;
			 	            break;
			        case 3: printf("Te ligaste a una chica pero se durmio y no pudiste llegar a mas. Aun asi todos en la Uni se enteraron y pudiste dormir y hacer el examen\n");
			                n=n+3;
			                break;
			        default: printf("Dios sabe que habra pasado...");
			                break;
			 	
			      }
        }
       else
	   printf("Te quedas estudiando y apruebas el examen\n");
	   printf("\n\n");
	   printf("El resto del semestre transcurre de manera normal.");
  
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
