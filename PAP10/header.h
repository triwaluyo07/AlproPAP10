#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void swapValue(int *num1,int *num2);
void changeValue(int *target,int num1,int num2);
void initDynArray(int **arrData,int Size);
void cetakArr(int **arrData,int Size);
void printArray(int *arrData,int Size);
void putAverage(float *avg,int *arrData,int Size);


#endif // HEADER_H_INCLUDED
