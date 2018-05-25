#include <stdio.h>
void imprime(char mensaje[], char nombre[]);
char dowhile(char op);
typedef struct{
	char nombre[50];
	char apellido[50];
	int edad; 
	int nummatricula;
}perfil;
void main()
{
	int m=0,n=0,numero;
	perfil f,r,g,h,*p=&f,*w=&r,*y=&g,*t=&h;
	char respuesta,c;
	printf("Escribe tu nombre:\n");
		scanf("%s", p->nombre);	
	printf("Escribe tu apellido:\n");
		scanf("%s", p->apellido);	
	printf("Escribe tu edad:\n");
		scanf("%i", &p->edad);	
	printf("Escribe tu numero de matricula:\n");
		scanf("%i", &p->nummatricula);
	printf("Nombre:%s\n", f.nombre);	
	printf("Apelldios:%s\n", f.apellido);
	printf("Edad:%i\n", f.edad);
	printf("Numero de matricula:%i\n", f.nummatricula);	
	//	Primer cuatri
	imprime("Estas en tu primer anno de carrera. Cursas ingenieria quimica en la Universidad Politecnica de Madrid\n ","Primerañoprimercuatri.txt");
	   printf("Hay una charla informativa, quieres ir?\n");
	     c= dowhile(respuesta);
	if(c=='s')
	   {
	   	m=m+1;
		printf("Te sientas al lado de Fermin ¿quiereis ser amigos?\n");
		c=dowhile(respuesta);
		if(c=='s')
		{
	
			n=n+1;
			printf("Te ayudara en Amplicion de matematicas\n");
			m=m+2;
		}
		else
		{
		
			printf("No te ayudara jamas y sera  tu peor enemigo.\n");
			n=n-1;
	   }
	   }
	else
		printf("Al dia siguiente no encuentras tu clase y llegas tarde\n");
        printf("Tu primer dia ha acabado\n");
	imprime("Han pasado unos dias y Pedrito te invita a una fiesta. Quieres ir?: ","Segundodia.txt");
    c=dowhile(respuesta);
    if(c =='s')
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
			 	            m=m-1;
			 	            break;
			        case 3: printf("Te ligaste a una chica pero se durmio y no pudiste llegar a mas. Aun asi todos en la Uni se enteraron y pudiste dormir y hacer el examen\n");
			                n=n+3;
			                m=m+2;
			                break;
			        default: printf("Dios sabe que habra pasado...");
			                break;
			 	
			      }
        }
    else
    {
	
	   printf("Te quedas estudiando y apruebas el examen\n");
	   printf("\n");
	   printf("El resto del semestre transcurre de manera normal.\n");
	}
  //SegundoCuatri
   	 printf("Empezamos el segundo cuatri de tu primer anho.\n");
	imprime("Te invitan a un evento academico despues de unos dias de empezar el segundo cuatri.\n Quieres empezar el cuatri siendo irresponable(n) o quieres ir a hacer algo con tu vida(s)?  \n", "SegundoCuatri.txt" );
	c=dowhile(respuesta);
		if(c=='s')
			{
			printf("Has decidido ir y te sientes inteligente.\n");
			m=m+1;
			n=n+1;
			if(m>=3)
	        {
		     imprime("Se te acerca el celebre y reconocido fisico Albino Arenas empieza a hablarte porque ha oido hablar de tus dotes intelectuales. Encima te llevas un autografo y apruebas un parcial sin importancia de fisica.\n", "Albino.txt");
		     m=m+1;
	        }
	         else
		     imprime("\n Tu inteligencia empieza a preocupar a tus padres.\n ","decepcion.txt");
			}
		else	
			{
				imprime("Muy bien, has decidido no ir. Con lo que pagan tus padres y tu solo vas a fiestas si hay alcohol. A veces ni eso. Menuda decepcion.\n", "EventoAcad.txt");
			}
     //resumen del segundo cuatri
	printf("Tu actual inteligencia es: %i , y tu actual reputación es %i.\n",m,n);
	imprime("Ampliación de Matematicas: 5.0 \n Metodos Numericos: 7.5 \n Estadistica: 8.0 \n Informatica: 4.9 \n Principios de Procesos Quimicos:5.5 \n Fisica II: 9.0 ","notas2.txt");
	printf("\n Has acabado el primer año de universidad.Enhorabuena.");
	imprime("¿Vas a querer estudiar en verano? si(s) o no(n)\n","pregunta.txt");
	c=dowhile(respuesta);
	if(c=='s')
		{
		printf("No te lo crees ni tu.");
		n=n-3;
		}
	else{

	
		if (c=='n')
			{
			printf("Muy bien pedazo de irresponsable.");
			n=n+2;
			}
		else
			imprime("No toques las narices y escribe s si la respuesta es si y n si la respuesta es no.","Inteligente.txt");
			}

	//Segundo año Primer Cuatrimestre
	imprime("Llegaste a la universidad en tu segundo anho, has conocido a tres amigos durante el verano ahora son tu apoyo y amor.En tus manos esta si quieres seguir con ellos, irte con otros o estar solo.\n","segundoañoinicio.txt");
	printf("Escribe el nombre de tu primer amigo\n");
	scanf("%s",w->nombre);
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
   imprime("Suspendiste algunas, tu puedes campeon\n","notasmlas.txt");
   //Segundo año segundo cuatri
   imprime("Empieza el segundo cuatrimesre \n", "Segundo cuatrimestre 2anno.txt");
	imprime("Inesperadamente, te empieza a gustar uno de tus amigos \n", "Segundo cuatrimestre 2anno.txt");

	
	
		printf("Quieres una relacion seria con esa persona? \n");
		c=dowhile(respuesta);
			
	if(c== 's'){
		printf("Empiezas una relacion con esa persona\n");
		n=n+2;
		}
	else{
		printf("Intentas pasar pagina pero al final comienzas la relacion en verano \n");
		n=n+1;
	}
	imprime("Tu segundo anno de carrera ha acabado\n", "Segundo cuatrimestre 2anno.txt");	
	//Tercer año Primer Cuatrimestre
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
