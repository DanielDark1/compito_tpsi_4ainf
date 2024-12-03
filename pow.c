#include "trace.h"
int potenza(int base, int esponente) {
	#ifdef DEBUG
		TRACE();
	#endif
	int i,res=1;
	for(i=esponente; i>0; i--) {
		res*=base;
	}
	return res;
}
