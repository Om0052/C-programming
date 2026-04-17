#include<stdio.h>

int main()
{
    int iValue = 11;
    char cValue = 'o';

    int *iptr = &iValue;
    char *cptr = &cValue;

    printf("Size of iptr : %d\n",sizeof(iptr));
    printf("Size of cptr : %d\n",sizeof(cptr));

    return 0;
}