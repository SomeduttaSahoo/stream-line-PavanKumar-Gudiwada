/* Inclusions */
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "string.h"

/* Constants and Macros */

const char bmsParam_a[2][20] = {"Temperature", "StateOfChar"};

typedef struct {
    float minVal_f;
    float maxVal_f;
    float avg_f;
}paramStat_t;

typedef struct {
    float bmsParamVal_f[15][2];
    paramStat_t tempStat_e;
    paramStat_t socStat_e;
    int valCount_i;
}bmsReceiver_t;

/* Function declarations */
void readBMSdata(char *strIndexer_c);
void analyseBMSData(void);
void calDataRanges_v(int count_i);
void storeBMSData_v(char *strIndexer_c);
