#include<stdio.h>
#include<stdlib.h>

int main(){
// exercicio 1	
	int num, num1;
	printf("Lanchonete\n");
	printf("Menu:\n");
	printf("1 - Hamburguer(R$10)\n");
	printf("2 - Pizza (R$15)\n");
	printf("3 - Refrigerante(R$5)\n\n");
	
	printf("Digite o numero do pedido:");
	scanf("%i", &num);
	fflush(stdin);
	
	switch(num){
		case 1: printf("Voce escolheu hamburguer\n\n");
		num=10;
		break;
		case 2: printf("Voce escolheu pizza\n\n");
		num=15;
		break;
		case 3: printf("Voce escolheu refrigerante\n\n");
		num=5;
		break;
		default: printf("Opcao invalida\n\n");
		return 0;
	}
		
	printf("Qual a quantidade desejada:");
	scanf("%i", &num1);
	fflush(stdin);

	float num3;

	if(num1*num>0 && num1*num<=30){
		printf("Preco da Conta: %.2f\n\n", num3=num*num1);
	}
		else if(num*num1>30){
			printf("Preco da conta: %.2f\n\n", num3=(num*num1)*0.9);
	}
			else{
				printf("Opcao invalida\n\n");
	}
	
	// exercicio 2
	int idade;
	printf("Plano de Saude\n\n");
	printf("Qual a sua idade:");
	scanf("%i", &idade);
	fflush(stdin);
	
	if(idade<=0){
		printf("Idade Invalida");
	}
		else if(idade>0 && idade<=17){
			printf("Valor do plano: R$100.00\n\n");
	}
			else if(idade>17 && idade<=40){
				printf("valor do plano: R$150.00\n\n");
	}
				else if(idade>40 && idade<60){
					printf("valor do plano: R$250.00\n\n");
	}
					else if (idade>=60 && idade<65){
						printf("Valor do plano: R$300.00\n\n");
	}
						else{
							printf("Valor do plano: R$450.00\n\n");
	}
	
	// exercicio 3
	printf("Sistema de compra com forma de pagamento\n");
	float pagamento;
	int forma;
	float total;
	printf("O valor a ser pago:");
	scanf("%f", &pagamento);
	fflush(stdin);
	printf("Qual a forma de pagamento:\n");
	printf("1 - Dinheiro (10%% desconto)\n");
	printf("2 - Cartao a vista (5%% desconto)\n");
	printf("3 - Cartao parcelado (sem desconto)\n");
	scanf("%i", &forma);
	
	switch(forma){
		case 1: total = pagamento*0.9;
			if(total>100){
				printf("Compra alta\n");
				printf("Valor final:%.2f", total);
			}
				else{
					printf("Valor final:%.2f", total);
				}
		break;
		case 2: total = pagamento*0.95;
			if(total>100){
				printf("Compra alta\n");
				printf("Valor final:%.2f", total);
			}
				else{
					printf("Valor final:%.2f", total);
				}
		break;
		case 3: total = pagamento;
			if(total>100){
				printf("Compra alta\n");
				printf("Valor final:%.2f", total);
			}
				else{
					printf("Valor final:%.2f", total);
				}
		break;
	}
	return 0;
}