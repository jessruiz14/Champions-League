//SISTEMA DE FUTBOL
#include <stdio.h>
#include <stdlib.h>

int main ()
{
char opc;

printf("\n \n Champions League 2019  \n \n");

printf("\n a Octavos de final\n ");
printf("\n b Cuartos de final\n ");
printf("\n c Semifinal\n");
printf("\n d Final \n");
printf("\n e Campeon\n");
printf("\n f Salir \n ");
fflush(stdin);
scanf("%c",&opc);

switch(opc){
        	
			case 'a':
		printf("\n \n Octavos de final: \n");
		printf("\n Atletico \n");
		printf("\n Liverpool \n");
		printf("\n Borussia Dortmund \n");
		printf("\n Roma \n");
		printf("\n Tottenham H. \n");
		printf("\n Schalke \n");
		printf("\n Porto \n");
		printf("\n O. Lyon \n");
		printf("\n Real Madrid \n");
		printf("\n Ajax \n");
		printf("\n PSG \n");
		printf("\n M. United \n");
		printf("\n Bayern Munich \n");
		printf("\n Barcelona \n");
		printf("\n Juventus \n");
		printf("\n M. City \n");
		break; 
		
			case 'b':
		printf("\n \n Cuartos de final: \n");
		printf("\n Tottenham H. \n");
		printf("\n Ajax \n");
		printf("\n Porto \n");
		printf("\n Liverpool\n ");
		printf("\n M. City \n");
		printf("\n M. United \n");
		printf("\n Barcelona \n");
		printf("\n Juventus \n");
		break; 
		
		
			case 'c':
		printf("\n \n Semifinal: \n");
		printf("\n Tottenham H. \n");
		printf("\n Liverpool \n");
		printf("\n Barcelona \n");
		printf("\n Ajax \n");
	    break;
		
		    case 'd':
		printf("\n \n Final: \n");
		printf("\n Liverpool\n ");
		printf("\n Tottenham H. \n");
		break;
		
		    case 'e':
		printf("\n \n Campeon: \n");
		printf("\n Liverpool \n");
		break;
		
		    case'f':
		printf("\n\n Salir \n");
	    break;
		
	}
	
	
	
	return 0;
	
}
