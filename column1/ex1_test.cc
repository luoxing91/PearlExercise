#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

int main(int argc, char** argv){
    int a[] = {2, 3, 1, 10, 0};
    size_t a_size = sizeof(a)/sizeof(int);
    pr_ints(a, a_size);
    qsort(a, a_size, sizeof(int), compare);
    pr_ints(a, a_size);
    return 0;
}
	
