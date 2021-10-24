#include<stdio.h>

void main()
{
    int *ptr;
    int *vtr;
    
    ptr = (int*)malloc(4*sizeof(int));
    vtr = (int*)malloc(4*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not allocated");
    }
    else
    {
        printf("Memory is allocated\n");
        printf("%d\n",ptr);
    }
    printf("%d",vtr);
}