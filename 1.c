#include <stdio.h>
#include <stdlib.h>
struct _A {
    char a;
    int  b;
}A[] = {
    [2] = {'c',0},
    [1] = {'d',1},
    {'e',2},
};
main()
{
    printf("%c,%d\n",A[1].a,A[1].b);
    printf("%c,%d\n",A[2].a,A[2].b);


}
