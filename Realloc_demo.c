#include<stdio.h>
#include<stdlib.h>

 int main()
 {
   int *Arr = NULL;

   //Step 1 : allocate the memory
   Arr = (int*)malloc(5 * sizeof(int));         //20 bytes

   //Step 2 : use the memory

   Arr = (int *)realloc(Arr,10*sizeof(int));    //40 bytes

   //Step 3 : free the memory

   free(Arr);
    
   return 0;

 }