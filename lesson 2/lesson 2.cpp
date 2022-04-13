#include "header.h"

int main()
{
    //2.1
    int array[8] = {4, 8, 5, 6, 2, 3, 1, 7};
    selectionSort(array, 8, descending);
    printArray(array, 8);
    selectionSort(array, 8, ascending);
    printArray(array, 8);
    //2.2
    int random_array[10];
    int first_i = -1, sum_i=0, size_random_array=size(random_array);
    for (int i = 0; i <size(random_array); i++)
    {

        random_array[i] = rand() % 30 + 1;
        if (i == 0)
        {
            first_i = random_array[i];
        }
        sum_i += random_array[i];
        cout << random_array[i] << " ";
    }
    cout << endl;
    
     array_conversion(first_i,sum_i)(random_array, size_random_array);
  
    
    return 0;

}