#include "header.h"

void swapValue(int *num1,int *num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2 = temp;
}

void changeValue(int *target,int num1,int num2)
{
    int c;
    c=num1+num2;
    *target=c;
}

void initDynArray(int **arrData,int Size)
{
    int a;

    for(a=0;a<Size;a++)
    {
         *(*arrData+a)=a+1;
    }
}
void cetakArr(int **arrData,int Size)
{
    int x;
    for(x=0;x<Size;x++)
    {
        printf("[%d] ",*(arrData+x));
    }
    printf("\n");
}

void printArray(int *arrData,int Size)
{
    if(Size==1)
    {
        printf("%d ",arrData[0]);
    }
    else
    {
        printArray(arrData,Size-1);
        printf("- %d ",arrData[Size-1]);

    }

}

void putAverage(float *avg,int *arrData,int Size)
{
    int x;
    float temp=0;

    for(x=0;x<Size;x++)
    {
        temp=temp+*(arrData+x);
    }
    *avg=temp/Size;
    printf("= %.1f ",*avg);
    printf("\n");
}
