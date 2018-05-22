#include <stdio.h> 
char dowhile(char op);
void main()
{
	char op;
	dowhile(op);
	
	
	
}
char dowhile(char op)
{
	do
	{
	printf("Escribe Si (s) o No (n): \n");
	scanf(" %c", &op);
    }
	while(op!='s' && op!='n');
}
