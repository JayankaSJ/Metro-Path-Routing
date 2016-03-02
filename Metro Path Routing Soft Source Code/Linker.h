#ifndef LINKER_H_DEFINED
#define LINKER_H_DEFINED


#include "stdafx.h"
#include "MainStructure.h"
#include "Database.h"

#define  DEBUG_KEY 8520									/* Key for administrator debug or changes */

#define PATH_HOLDER_SIZE 64								/* Returned station order array size*/

#define DISTANCE_PER_DOT 500							/* Distance per dot */

#define DEF_TIME_SCALER_PER_DOT_LINE_A 1				/* Time scale definitions for preprocessor */
#define DEF_TIME_SCALER_PER_DOT_LINE_B 2
#define DEF_TIME_SCALER_PER_DOT_LINE_C 2

#define SPEED_INCREASED_BY 2							/* Speed enhancer for C line in selected time ranges */

//#define LOW_MEMORY_SYSTEM

extern bool debugMode;
extern bool ViewMap;
extern bool ViaTriStations;
extern time_t Nowtime;

extern int INTStartPoint;
extern int INTEndPoint;
extern int ReturendValue;

extern int TIME_SCALER_PER_DOT_LINE_A;
extern int TIME_SCALER_PER_DOT_LINE_B;
extern int TIME_SCALER_PER_DOT_LINE_C;

struct StationArray{
	struct Station{
		int name;
		int cost;
		char EdgeType;
		int EdgeLength;
	};
	Station StationOrder[PATH_HOLDER_SIZE];
	int NextStoreIndex;
};

extern StationArray PathOrderHolder;


void calc_all(node_t *start);
void show_path(node_t *nd);
void add_edge(node_t *a, node_t *b, int d);
void free_edges(void);


#endif

/* Header for Mapping
while executing program do all of mapping functions between Interface and main application
like	nodes -->  stations
		edges -->  distance
*/