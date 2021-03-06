#ifndef NBODY_H
#define NBODY_H

#define N 5000
#define G 0.001
#define dt 0.001
#define t_end 0.004

typedef struct{
	double x, y;
} Vec2;

typedef struct{
	double mass;
	Vec2 position;
	Vec2 velocity;
} Body;

void cal_force(Vec2 *f, Body *target, Body *source);

void nextPhase(Body bodies[N], double t_step, int steps);

void nextPhaseHalf (Body bodies[N], double t_step, int steps);

void randInit(Body bodies[], int start, int end);

void bodyCopy(Body target[], Body source[], int start, int end);

void bodiesPrint(Body bodies[], int start, int end);

#endif
