#include "stdafx.h"
#include "Linker.h"


bool debugMode = false;
bool ViewMap = false;
bool ViaTriStations = false;
time_t Nowtime = 0;

int INTStartPoint = 0;
int INTEndPoint = 0;
int ReturendValue = 0;

int TIME_SCALER_PER_DOT_LINE_A = DEF_TIME_SCALER_PER_DOT_LINE_A;
int TIME_SCALER_PER_DOT_LINE_B = DEF_TIME_SCALER_PER_DOT_LINE_B;
int TIME_SCALER_PER_DOT_LINE_C = DEF_TIME_SCALER_PER_DOT_LINE_C;

StationArray PathOrderHolder;

