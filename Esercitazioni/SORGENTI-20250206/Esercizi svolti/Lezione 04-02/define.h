#ifndef _DEFINE_H_
#define _DEFINE_H_

// soglia massima per indicare se la spesa e' fuori budget
#define SOGLIA_MASSIMA_SPESA 100.00f

// macro per calcolare la penale del 10%
#define CALC_PENALE(x) ((x) * 0.1f)

// macro per abilitare la compilazione del codice per il calcolo della penale
#define ABILITA_CALC_PENALE
// #undef ABILITA_CALC_PENALE

#define DEBUG
#undef DEBUG

#ifdef DEBUG
#define DEBUG_PRINT(x) printf("[DEBUG] - %s\n", x);
#else
#define DEBUG_PRINT(x) 
#endif // DEBUG
 
#endif // _DEFINE_H_
