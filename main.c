#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nums[10];
    
    nums[0] = 0;
    
    srand(time(NULL));
    
    int count;
    for (count = 1; count < 10; count++) {
        int random = rand();
        nums[count] = random;
    }
    
    printf("Int array: \n[");
    for (count = 0; count < 10; count++) {
        printf("%d", nums[count]);
        if (count < 9) printf(", ");
        else printf("]\n\n");
    }
    
    int newNums[10];
    int *p = newNums;
    
    for (count = 0; count < 10; count++) {
        p[count] = nums[9 - count];
    }
    
    printf("Int array using pointers (w/ []): \n[");
    for (count = 0; count < 10; count++) {
        printf("%d", p[count]);
        if (count < 9) printf(", ");
        else printf("]\n\n");
    }
    
    printf("Int array using pointers (w/ *): \n[");
    for (count = 0; count < 10; count++) {
        printf("%d", *(p + count));
        if (count < 9) printf(", ");
        else printf("]\n");
    }
}
