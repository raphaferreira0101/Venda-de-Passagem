#include <stdio.h>
#include <conio.h>

main ()
{
int janela [25] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int  corredor [25] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, i, r, poltrona, lugar;
char  c;

do
{

printf ("\n\n [-----COMPRA DE PASSAGENS RODOVIARIA BOM VIVER ONIBUS 01-----]");
printf ("\n\tPARA COMPRA DE PASSAGEM DIGITE 1   \n\tPARA MOSTRAR O MAPA DIGITE 2   \n\tPARA SAIR DIGITE 3 \n ");
printf("\tDIGITE A OPCAO ESCOLHIDA:");
scanf ("%d", &r);
if (r==1||r==2||r==3)

{
switch (r) {

case 1: 
	printf ("\nDigite o lado que deseja viajar [1] PARA JANELA OU [2] PARA CORREDOR:");
	scanf ("%d", &r); fflush (stdin);
	 
	switch (r) 
		{
			case 1:
			printf("\nVOCE ESCOLHEU LADO DA JANELA DIGITE A POLTRONA QUE DESEJA VIAJAR:");
			scanf ("%d", &poltrona); fflush (stdin);
			
			
			if (janela[poltrona] == 0)
			{
			janela [poltrona] = 1;
			printf ("Poltrona desocupada - Venda Sucessedida");
			}
			else 
			if (janela[poltrona] == 1) 
			{
				printf ("Poltrona Ocupada - Escolha Outra");
			
			}
			break;
			case 2:
			printf("\nVOCE ESCOLHEU LADO DO CORREDOR DIGITE A POLTRONA QUE DESEJA VIAJAR:");
			scanf ("%d", &poltrona); fflush (stdin);
			if (corredor[poltrona] == 0)
			{
			corredor [poltrona] = 1;
			printf ("Poltrona desocupada - Venda Sucessedida");
			}
			else 
			if (corredor[poltrona] == 1) 
			{
				printf ("Poltrona Ocupada - Escolha Outra");
			}
		}
		break;
	 
	 	//mapa  concertar 
	 switch (r) {
		}
		
		case 2:
		for (i=1; i<=24; i++) 
		{
		printf("         [Janela]      [Corredor]");
			for (i=1; i<=24; i++)
			{ 
			 if (janela [i] == 0)
			 	{
					printf ("\n\t %d-Livre ", i);
					
				}
				else 
				
				{
				printf ("\n\t%d-Ocupado ", i);
				}
				if (corredor[i] == 0)
				{
				printf ("\t%d-Livre", i);
			
				}
				else 
				{
				printf ("\t%d-Ocupado", i);
				}
			
			}	
		break;
		
	} 
  } 
}
else
{
printf("\nOpcao invalida: Digite qualquer tecla para sair");
return 0;
}

}while (r<3);
printf ("\nDigite qualquer tecla para sair");
fflush (stdin);

c = getch ();
}
