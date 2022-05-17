#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printarray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
}

void swappy(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high) //PT teachers
{
    int random_pivot = low + (rand() % (high - low)); //int pivot = low;
        //printf("%d\n",random_pivot);
    swappy(&a[random_pivot], &a[low]); //so that pivot gets out of the way

    int pivot = low;
    int i = low + 1;
    int j = high;

    /*printf(" %d", pivot);
    printf("\n  %d", low);
    printf("   %d\n", high);*/

    do
    {
        while (a[i] <= a[pivot])
            i++;

        while (a[j] > a[pivot])
            j--;

        if (i < j)
        {
            swappy(&a[i], &a[j]);
        }
    } while (i < j);

    swappy(&a[low], &a[j]);
    return j;
}

void miss_quicksort(int a[], int low, int high)
{
    int partition_index; //index of pivot afetr the partition

    if (low < high)
    {
        partition_index = partition(a, low, high);
        miss_quicksort(a, low, partition_index - 1);  //sort left subarray
        miss_quicksort(a, partition_index + 1, high); //sort right subarray
    }
}

int main()
{
    int array[] = {2,4,1,5,9};
    int size = 10;
    srand(time(0));

    printf("\nOriginal Array : \n");
    printarray(array, size);
    miss_quicksort(array, 0, size - 1);
    printf("\n\nSorted Array : \n");
    printarray(array, size);
    return 0;
}