#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "nbody.h"
#include "display.h"

int main(int argc, char *argv[]){
	int K = 1;
	double t0, t1, te;

	Body *bodies = (Body *) malloc (sizeof(Body ) * N);

	randInit (bodies, 0, N);

	wctime(&t0);
	nextPhase(bodies, dt, K);
	wctime(&t1);
	te = t1 - t0;

	printf("t0: %f\n", t0);
	printf("t1: %f\n", t1);
	printf("te: %f\n", te);
	printf("elapse - wc: %f\n", (K) * (N*N)/te	*(1e-9));

	free(bodies);
//	printf("%d\n", sizeof(Body*));
	return 0;
}
