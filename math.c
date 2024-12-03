#include "trace.h"
int somma(int x, int y) {
	#ifdef DEBUG
		TRACE();
	#endif
	return x+y;
}
int differenza(int x, int y) {
	#ifdef DEBUG
		TRACE();
	#endif
	return x-y;
}
int moltiplicazione(int x, int y) {
	#ifdef DEBUG
		TRACE();
	#endif
	return x*y;
}
float divisione(float x, float y) {
	#ifdef DEBUG
		TRACE();
	#endif
	return x/y;
}
