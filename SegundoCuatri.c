#include <stdio.h> 
typedef struct{
	char nombre[50];
	char apellido[50];
	int edad; 
	int nummatricula;
}perfil;
void imprime(char mensaje[],char nombre[]);
void main()
{
int n,m;
char respuesta,respuesta1,respuesta2,cadena[500];
FILE *sc,*pf;	
perfil f,*p= &f;
	printf("Escribe tu nombre:\n");
		scanf("%s", p->nombre);	
	printf("Escribe tu apellido:\n");
		scanf("%s", p->apellido);	
	printf("Escribe tu edad:\n");
		scanf("%i", p->edad);	
	printf("Escribe tu numero de matricula:\n");
		scanf("%i", p->nummatricula);
		
	printf("%s\n", f.nombre);	
	printf("%s\n", f.apellido);
	printf("%i\n", f.edad);
	printf("%i\n", f.nummatricula);	
	
	
	
	pf=fopen("mensaje.txt", "w");
	if(pf== NULL)
	{		printf("Error al abrir el fichero\n");
		return;
	}
	else 
	{
	fprintf(pf, "%s\n", "Estas en tu primer anno de carrera. Cursas ingenieria quimica en la Universidad Politecnica de Madrid ");
	fclose(pf);
	pf=fopen("mensaje.txt", "r");
	fscanf(pf, "%[^\n]", cadena);
	fclose(pf);
	printf("%s\n", cadena);
	}
	
	
	printf("Hay una charla informativa,?quieres ir? (si o no) \n");
	scanf("%s",&respuesta);
	if(respuesta=='si')
	{
		printf("Te sientas al lado de Fermin ?quiereis ser amigos? (si o no)\n");
		scanf("%s",&respuesta);
		if(respuesta=='si')
			printf("Te ayudara en Amplicion de matematicas");
		else
			printf("No te ayudara jamas y sera  tu peor enemigo");
		return;	
	}	
	else
		printf("Al dia siguiente no encuentras tu clase y llegas tarde\n");
	return;
	printf("Tu primer dia ha acabado");
	

	//SEGUNDO CUATRI
	printf("Empezamos el segundo cuatri de tu primer anho.\n");
	imprime("Te invitan a un evento academico despues de unos dias de empezar el segundo cuatri.\n ¿Quieres empezar el cuatri siendo irresponable o quieres ir a hacer algo con tu vida? si(s) o no(n) \n", "SegundoCuatri.txt" );
	scanf("%c",&respuesta1);
	if(respuesta1=='s')
		{
		printf("Has decidido ir y te sientes inteligente.");
		m=m-1;
		n++;
		}
	else	
		{
			imprime("Muy bien, has decidido no ir. Con lo que pagan tus padres y tu solo vas a fiestas si hay alcohol. A veces ni eso. Menuda decepcion.\n", "EventoAcad.txt");
		}
	if(m>=3)
	{
		imprime("Se te acerca el celebre y reconocido fisico Albino Arenas empieza a hablarte porque ha oido hablar de tus dotes intelectuales. Encima te llevas un autografo y apruebas un parcial sin importancia de fisica.", "Albino.txt");
		m++;
		n--;
	}
	else
		imprime("\n Despues de ver las decisiones que tomas no se como lo haces para que no te echen de la universidad.\n Impresionante...\n","decepcion.txt");
	
	//resumen del segundo cuatri
	printf("Tu actual inteligencia es: %i , y tu actual reputación es %i.\n",m,n);
	imprime("Ampliación de Matematicas: 5.0 \n Metodos Numericos: 7.5 \n Estadistica: 8.0 \n Informatica: 4.9 \n Principios de Procesos Quimicos:5.5 \n Fisica II: 9.0 ","notas2.txt");
	printf("\n Has acabado el primer año de universidad.Enhorabuena.");
	imprime("¿Vas a querer estudiar en verano? si(s) o no(n)\n","pregunta.txt");
	scanf("%c",&respuesta2);
	
	if(respuesta2=='s')
		{
		printf("No te lo crees ni tu.");
		n--;
		}
	else
	
		if (respuesta2=='n')
			{
			printf("Muy bien pedazo de irresponsable.");
			n=n+2;
			}
		else
			imprime("No toques las narices y escribe s si la respuesta es si y n si la respuesta es no.","Inteligente.txt");
		return 0;	
	
return 0;
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

