#include <stdio.h>
#include <string> 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%c ",(char)arr[i]);
    printf("\n");
}
void bubbleSort(int arr[], int n)
{
   int i, j,comparisons;
   bool swapped;
   comparisons = 0;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
   if(i % 2 == 0)
   {
     for (j = 0; j < n-1; j++)
     {
	    if (arr[j] > arr[j+1])
            {
               swap(&arr[j], &arr[j+1]);
               swapped = true;
	       comparisons++;
            }
            
     }
     printf("Swapped right to left \n");
     printArray(arr,n);
   }
   else
   {
     for (j = n-1; j > 0; j--)
     {
            if (arr[j-1] > arr[j])
            {
               swap(&arr[j], &arr[j-1]);
               swapped = true;
               comparisons++;
            }

     }
     printf("Swapped left to right \n");
     printArray(arr,n);
    }
     if (swapped == false)
        break;
   }
   printf("Comparisons made: ");
   printf("%d\n",comparisons);
} 

 

int main()
{
    char userstr[] = "EASYQUESTION";
    int n = (sizeof(userstr)/sizeof(*userstr))-1;
    //printf("%d", n);
    int* myarray = new int[n];  
    for(int i=0;i< n;i++){
       myarray[i] = (int)userstr[i];
    }
    //int arr[] = {"EASYQUESTION"};
    bubbleSort(myarray, n);
    printf("Sorted array: \n");
    printArray(myarray, n);
    return 0;
}
