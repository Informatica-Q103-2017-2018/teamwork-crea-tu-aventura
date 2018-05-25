#include<stdio.h>

typedef struct{
	char nombre[50];
	char apellido[50];
	int edad; 
	int nummatricula;
}perfil;
void imprime(char mensaje[],char nombre[]);
char dowhile(char op);
int main()
{
	int n,m;
	char respuesta,cadena[500];
	int  salud;
	int a1,a2,a3,a4,a5,numero;
    
	FILE *sc,*pf;	
	perfil f,*p= &f;
	
	printf("Escribe tu nombre:\n");
		scanf("%s", p->nombre);	
	printf("Escribe tu apellido:\n");
		scanf("%s", p->apellido);	
	printf("Escribe tu edad:\n");
		scanf("%i", &p->edad);	
	printf("Escribe tu numero de matricula:\n");
		scanf("%i", &p->nummatricula);
		
	printf("%s\n", f.nombre);	
	printf("%s\n", f.apellido);
	printf("%i\n", f.edad);
	printf("%i\n", f.nummatricula);	
	
	
	pf=fopen("mensaje.txt", "w");
	if(pf== NULL)
	{		
		printf("Error al abrir el fichero\n");
		return -1;
	}
	else 
	{
		fprintf(pf, "%s\n", "Estas en tu primer anno de carrera. Cursas ingenieria quimica en la Universidad Politecnica de Madrid ");
		fclose(pf);
		pf=fopen("mensaje.txt", "r");
		fscanf(pf, "%[^\n]", cadena);
		fclose(pf);
		printf("%s\n", cadena);
	}//	Primer cuatri
	   printf("Hay una charla informativa,¿quieres ir? (si(s) o no(n)) \n");
	     a1= dowhile(respuesta);
	if(a1=='s')
	   {
	   	m++;
		printf("Te sientas al lado de Fermin ¿quiereis ser amigos?\n");
		a2=dowhile(respuesta);
		if(a2=='s')
		{
	
			n++;
			printf("Te ayudara en Amplicion de matematicas\n");
		}
		else
		{
		
			printf("No te ayudara jamas y sera  tu peor enemigo.\n");
			n--;
	   }
	   }
	else
		printf("Al dia siguiente no encuentras tu clase y llegas tarde\n");

 	printf("Tu primer dia ha acabado\n");
	imprime("Han pasado unos dias y Pedrito te invita a una fiesta. Quieres ir?: ","Segundodia.txt");
    a3=dowhile(respuesta);
    if(a3 =='s')
        {   
			n=n+3;
		 	printf("Al llegar conoces a la gente de la Uni que decidio ir y te lo pasas bien pero...\n ");
            printf("Elige un numero: Beber (1), Aceptarle un porro a alguien (2), Intentar ligar (3)\n");
            scanf("%d", &numero);
         	switch(numero)
			      {
			 	    case 1: printf("Te emborrachas demasiado. Te despiertas a las 14 de la tarde suspendiendo asi el examen que tenias a las 11:45.\n"); 
			 	            break;
			 	    case 2: printf("Fumaste uno y luego mas porros, fuiste fumado a hacer el examen y ni tu nombre pusiste bien.\n");
			 	            m--;
			 	            break;
			        case 3: printf("Te ligaste a una chica pero se durmio y no pudiste llegar a mas. Aun asi todos en la Uni se enteraron y pudiste dormir y hacer el examen\n");
			                n=n+3;
			                break;
			        default: printf("Dios sabe que habra pasado...");
			                break;
			 	
			      }
        }
    else
    {
	
	   printf("Te quedas estudiando y apruebas el examen\n");
	   printf("\n\n");
	   printf("El resto del semestre transcurre de manera normal.\n");
	}
  //SegundoCuatri
   	 printf("Empezamos el segundo cuatri de tu primer anho.\n");
	imprime("Te invitan a un evento academico despues de unos dias de empezar el segundo cuatri.\n ¿Quieres empezar el cuatri siendo irresponable o quieres ir a hacer algo con tu vida?  \n", "SegundoCuatri.txt" );
	a4=dowhile(respuesta);
		if(a4=='s')
			{
			printf("Has decidido ir y te sientes inteligente.");
			m--;
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
		
	}
	else
		imprime("\n Tu inteligencia empieza a preocupar a tus padres.\n ","decepcion.txt");
	
	//resumen del segundo cuatri
	printf("Tu actual inteligencia es: %i , y tu actual reputación es %i.\n",m,n);
	imprime("Ampliación de Matematicas: 5.0 \n Metodos Numericos: 7.5 \n Estadistica: 8.0 \n Informatica: 4.9 \n Principios de Procesos Quimicos:5.5 \n Fisica II: 9.0 ","notas2.txt");
	printf("\n Has acabado el primer año de universidad.Enhorabuena.");
	imprime("¿Vas a querer estudiar en verano? si(s) o no(n)\n","pregunta.txt");
	a5=dowhile(respuesta);
	
	if(a5=='s')
		{
		printf("No te lo crees ni tu.");
		n=n-3;
		}
	else
	
		if (a5=='n')
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
