#include <stdio.h>
void imprime(char mensaje[], char nombre[]);
char dowhile(char op);
typedef struct{
	char nombre[100];
}nombreamigos;
void main()
{
	int m=0,n=0;
	nombreamigos f,g,h,*p=&f,*y=&g,*t=&h;
	char respuesta,c;
	imprime("Llegaste a la universidad en tu segundo anho, has conocido a tres amigos durante el verano ahora son tu apoyo y amor.En tus manos esta si quieres seguir con ellos, irte con otros o estar solo.\n","segundoañoinicio.txt");
	printf("Escribe el nombre de tu primer amigo\n");
	scanf("%s",p->nombre);
	printf("Escribe el nombre de tu segundo amigo\n");
	scanf("%s",y->nombre);
	printf("Escribe el nombre de tu tercer amigo\n");
	scanf("%s",t->nombre);
	printf("%s,%s y %s te ofrecen salir de copas a las 12 de la manhana pero resulta que es a la hora que tienes la clase de informatica\n Te quieres ir con ellos?\n",p->nombre,y->nombre,t->nombre);
	c=dowhile(respuesta);
   if(c=='n')
   {
   	printf("Has hecho bien la clase te ha servido bastante, subes en inteligencia\n");
   	m=m+4;
   }
   else
   {
   	printf("No te lo crees ni tu, lo necesitaras para aprobar esta asignatura. Por cabezon y dudoso se te resta uno de popularidad y se te sube inteligencia\n");
   	m=m+3;
   	n=n-1;
   }
   if(m>=4)
   {
   	imprime("Tus notas son buenas\n","BUNEASNOTAS.txt");
   }
   else if (m<=3)
   imprime("mierdda de nota","notasmlas.txt");
   
   
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
