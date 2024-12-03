#include <stdio.h>
#include "trace.h"
#include "math.h"
#include "pow.h"
#include "logger.h"

#define BUF 10

int operando1_[BUF] = {0};
int operando2_[BUF] = {0};
int risultato_[BUF] = {0};
char operazione_[BUF] = {'\0'};
int j=0;

int main() {
	#ifdef DEBUG
		TRACE();
	#endif
	char scelta;
	int A,B;
	do {
		printf("\n\nCALCOLATRICE\n");
		printf("+ Somma\n");
		printf("* Moltiplicazione\n");
		printf("- Differenza\n");
		printf("/ Divisione\n");
		printf("^ Potenza\n");
		printf("# Logger\n");
		printf("! Esci\n");
		printf("Inserisci scelta: ");
		scanf(" %c",&scelta);
		switch(scelta) {
			case '+':
				printf("\nInserisci primo numero: ");
				scanf("%d",&A);
				printf("Inserisci secondo numreo: ");
				scanf("%d",&B);
				operando1_[j] = A;
				operando2_[j] = B;
				risultato_[j] = somma(A,B);
				operazione_[j] = scelta;
				printf("\n| Risultato della somma: %d\n",somma(A,B));
				j++;
				break;
			case '*':
				printf("\nInserisci primo numero: ");
				scanf("%d",&A);
				printf("Inserisci secondo numreo: ");
				scanf("%d",&B);
				operando1_[j] = A;
				operando2_[j] = B;
				risultato_[j] = moltiplicazione(A,B);
				operazione_[j] = scelta;
				printf("\n| Risultato della moltiplicazione: %d\n",moltiplicazione(A,B));
				j++;
				break;
			case '-':
				printf("\nInserisci primo numero: ");
				scanf("%d",&A);
				printf("Inserisci secondo numreo: ");
				scanf("%d",&B);
				operando1_[j] = A;
				operando2_[j] = B;
				risultato_[j] = differenza(A,B);
				operazione_[j] = scelta;
				printf("\n| Risultato della differenza: %d\n",differenza(A,B));
				j++;
				break;
			case '/':
				printf("\nInserisci primo numero: ");
				scanf("%d",&A);
				printf("Inserisci secondo numreo: ");
				scanf("%d",&B);
				operando1_[j] = A;
				operando2_[j] = B;
				risultato_[j] = divisione(A,B);
				operazione_[j] = scelta;
				printf("\n| Risultato della divisione: %.2f\n",divisione(A,B));
				j++;
				break;
			case '^':
				printf("\nInserisci primo numero: ");
				scanf("%d",&A);
				printf("Inserisci secondo numreo: ");
				scanf("%d",&B);
				operando1_[j] = A;
				operando2_[j] = B;
				risultato_[j] = potenza(A,B);
				operazione_[j] = scelta;
				printf("\n| Risultato della potenza: %d",potenza(A,B));
				j++;
				break;
			case '#':
				logger(j);
				break;
			case '!':
				break;
			default:
				printf("\n| Operazione inesistente, per favore riprova.");
				break;
		}
	} while (scelta!='!');
}
