#include<stdio.h>
#include<stdlib.h>

 int main()
 {
   int lenght = 0;
   int *Arr = NULL;
   printf("Enter the number of elements:\n");
   scanf("%d",&lenght);

   //Step 1 : allocate the memory
   Arr = (int*)malloc(lenght * sizeof(int));
   if(Arr == NULL)
   {
      printf("Unable to allocate memory\n");
   }
   else
   {
      printf("Memory gets successfully allocated\n");
   }

   //Step 2 : use the memory

   //Step 3 : free the memory

   free(Arr);
    
   return 0;

 }