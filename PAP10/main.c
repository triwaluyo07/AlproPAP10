#include "header.h"
/// Nama : Tri Waluyo
/// Kelas : A11.4203
/// Nim : A11.2017.10097
int main()
{
    printf("===========================================\n");
    printf("\t\t Tugas 1 \n");
    printf("===========================================\n");

    int a=5,b=6,c=7,d=8;
    int e=10,f=11,g=12,h=13;

    printf("a= %d, b= %d\n",a,b);
    swapValue(&a,&b);
    printf("swap : \na= %d, b= %d\n",a,b);
    printf("\nc= %d, d= %d\n",c,d);
    swapValue(&c,&d);
    printf("swap : \na= %d, b= %d\n",c,d);
    printf("\ne= %d, f= %d\n",e,f);
    swapValue(&e,&f);
    printf("swap : \na= %d, b= %d\n",e,f);
    printf("\ng= %d, h= %d\n",g,h);
    swapValue(&g,&h);
    printf("swap : \na= %d, b= %d\n",g,h);

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 2 \n");
    printf("===========================================\n");

    printf("a = %d\n",a);
    changeValue(&a,5,9);
    printf("change -> a = %d\n",a);
    printf("b = %d\n",b);
    changeValue(&b,7,7);
    printf("change -> a = %d\n",b);
    printf("c = %d\n",c);
    changeValue(&c,6,5);
    printf("change -> a = %d\n",c);
    printf("d = %d\n",d);
    changeValue(&d,2,9);
    printf("change -> a = %d\n",d);

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 3 \n");
    printf("===========================================\n");

    int *arr1, *arr2, *arr3, *arr4;
    arr1 = arr2 = arr3 = arr4 = malloc(sizeof(*arr1));

    initDynArray(&arr1,6);
    cetakArr(arr1,6);

    initDynArray(&arr1,4);
    cetakArr(arr2,4);

    initDynArray(&arr3,5);
    cetakArr(arr3,5);

    initDynArray(&arr4,3);
    cetakArr(arr4,3);

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 4 \n");
    printf("===========================================\n");

    int arr5[] = {1, 2, 3, 4, 5};
    int arr6[] = {6, 7, 8, 9, 10};
    int arr7[] = {21, 22, 23, 24, 25};
    int arr8[] = {31, 32, 33, 34, 35};

    printArray(&arr5,5);
    printf("\n");
    printArray(&arr6,5);
    printf("\n");
    printArray(&arr7,5);
    printf("\n");
    printArray(&arr8,5);
    printf("\n");

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 5 \n");
    printf("===========================================\n");

    float m,n,o,p;
    int arr9[]={11,12,13,14,15};
    int arr10[]={16,17,18,19,20};

    printf("putAverage(&m, {1, 2, 3, 4, 5}, 5) = ");
    putAverage(&m,&arr5,5);
    printf("putAverage(&n, {6, 7, 8, 9, 10}, 5)= ");
    putAverage(&n,&arr6,5);
    printf("putAverage(&o, {11, 12, 13, 14, 15}, 5)");
    putAverage(&o,&arr9,5);
    printf("putAverage(&p, {16, 17, 18, 19, 20}, 5)");
    putAverage(&p,&arr10,5);
    return 0;
}
