#include "header.h"

//2.1


void selectionSort(int* array, int size, bool (*comparisonFcn)(int, int)) {
    for (int startIndex = 0; startIndex < size; ++startIndex)
    {
        int bestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (comparisonFcn(array[bestIndex], array[currentIndex]))
                bestIndex = currentIndex;
        }

        swap(array[startIndex], array[bestIndex]);
    }
}


bool ascending(int a, int b) {
    return a > b;
}


bool descending(int a, int b) {
    return a < b;
}


void printArray(int* array, int size)
{
    for (int index = 0; index < size; ++index) {
        cout << array[index] << " ";
    }
    cout << "\n";

}


//2.2

void (*array_conversion(int first,int sum))(int array[],int size) {
    if (first==sum)
    {
        return revers;
    }
    else if(first<sum)
    {
        return sort_up;
    }
    else {
        return sort_down;
    }
}



void revers(int *array,int size) {
    int temp;
    int i = 0;           
    int j = size - 1;     

    while (i < j) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }
    cout << endl;
    printArray(array, size);
}

void sort_up(int* array, int size) {
    for (int startIndex = 0; startIndex < size; ++startIndex) {
        int bestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[bestIndex]> array[currentIndex])
                bestIndex = currentIndex;
        }

        swap(array[startIndex], array[bestIndex]);

    }

    printArray(array, size);

}

void sort_down(int* array, int size) {
    for (int startIndex = 0; startIndex < size; ++startIndex) {
        int bestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[bestIndex] < array[currentIndex])
                bestIndex = currentIndex;
        }

        swap(array[startIndex], array[bestIndex]);
    }

    printArray(array, size);
}
