#include <stdio.h>
#include "trace.h"
#define BUF 10
void logger(int iterazioni) {
	#ifdef DEBUG
		TRACE();
	#endif
	int i;
	extern int j;
	extern int operando1_[BUF];
	extern int operando2_[BUF];
	extern int risultato_[BUF];
	extern char operazione_[BUF];
	if(j==0) {
		printf("\n| Nessun operazione e' stata eseguita fin'ora.");
		return;
	}
	for(i=0;i<iterazioni;i++) {
		printf("\n\n------%d-------\n",i+1);
		printf("OPERANDO 1: %d\n",operando1_[i]);
		printf("OPERANDO 2: %d\n",operando2_[i]);
		printf("RISULTATO: %d\n",risultato_[i]);
		printf("OPERAZIONE: %c\n",operazione_[i]);
	}
	
}
