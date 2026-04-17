#include<stdio.h>

int main()
{
    char cValue='s';
    int iValue=90;
    float fValue=90.07f;
    double dValue=80.29837;
    
    printf("Size of character is : %lu\n",sizeof(cValue));
    printf("Size of integer is : %lu\n",sizeof(iValue));
    printf("Size of float is : %lu\n",sizeof(fValue));
    printf("Size of double is : %lu\n",sizeof(dValue));

    return 0;
}