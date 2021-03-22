#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *nums  = (int *)malloc(20 * sizeof(int));
    int *p = nums;
    for(int i = 0; i < 20; ++i)
        *p++ = i;

    for(int i = 0; i < 20; ++i) {
        printf("nums + i = %d\t", nums + i);
        printf("*(nums + i) = %d\n", *(nums + i));
    }


    printf("\nnums + 10 = %d\t",(char *)nums+10*sizeof(int));
    printf("%d\n", *(int *)((char *)nums + 10*sizeof(int)));
    p = nums;
    *(int **)nums = (char *)p + 10*sizeof(int);
    printf("*nums = %d\n", *nums);
    int ** q = nums;
    printf("*nums = %d\n", *q);
    p = (int *)*q;
    printf("**nums = %d\n", *p);

    return 0;
}
