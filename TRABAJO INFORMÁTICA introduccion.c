#include <stdio.h> 
typedef struct{
	char nombre[50];
	char apellido[50];
	int edad; 
	int nummatricula;
}perfil;
void main()
   {
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
	
	FILE *pf;
	char cadena[500];
	
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
	}
	
	
