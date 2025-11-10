#include <stdio.h>
#include <locale.h>
main() {

	setlocale(LC_ALL, "Portuguese");
	
	int numeroMesa;
	float valorConsumo, desconto, valorPagar;
	
	printf("Qual o número da sua mesa?: ");
	scanf("%i", &numeroMesa);
	printf("Qual foi o valor total do seu consumo?: ");
	scanf("%f", &valorConsumo);
	
		if (numeroMesa >=1 && numeroMesa <= 3) {
		desconto = valorConsumo * 0.15;
	} else if (numeroMesa >=4 && numeroMesa <= 7) {
	desconto = valorConsumo * 0.125;
	} else {
    desconto = 0;
	}
	
	valorPagar = valorConsumo - desconto;
	
	printf("O valor a pagar será: R$ %.2f\n", valorPagar);
}

