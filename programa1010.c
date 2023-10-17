#include <stdio.h>
#include <locale.h>
int main  (int argc, char*argv[] ) {
float numero1, numero2, total;
int operacao, opcao;
opcao=1;
while (opcao==1){
	printf("Digite um numero");
	scanf("%f" , &numero1);
	printf("Digite outro numero");
	scanf("%f",  &numero2);
	
	printf("Digite 1 para Mutiplicação\n");
	
	printf("Digite 2 para Subtração\n");

	printf("Digite 3 para Adição\n");

	printf("Digite 4 para Divisão\n");
	
	scanf("%d", &operacao);
	
	switch(operacao){
case 1:
	total= numero1 * numero2;
		break;
case 2: 
	total= numero1 - numero2;
		break;
case 3: 
	total= numero1 + numero2;
		break;
case 4: 
	total= numero1 / numero2;
		break;
	} ; 

	printf("O resultado da sua operação é: %.2f\n", total);
	printf("Se quyiser continuar Digite 1,caso queira terminr Digite 0\n");
	scanf("%d", &opcao);
	};

return 0;
}
