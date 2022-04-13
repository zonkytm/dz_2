#ifndef HEADER_H
#define HEADER_H
#include <iostream> 
using namespace std;
//  2.1

void selectionSort(int* array, int size, bool (*comparisonFcn)(int, int));
bool ascending(int a, int b);//по восходящей
bool descending(int a, int b);//по нисходящей
void printArray(int* array, int size);


//2.2



void (*array_conversion(int first,int sum))(int array[],int size);

void revers(int array[],int size);
void sort_up(int array[],int size);
void sort_down(int array[],int size);

#endif