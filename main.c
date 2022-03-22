#include <stdlib.h>
#include <stdio.h>

#define GET_BIT(Num, Bit_No) ((Num >> Bit_No) & 1)

int main() {
    int num, bitNum;
    scanf("%d%d", &num, &bitNum);
    printf("The nth bit which n = %d, is %d", bitNum, GET_BIT(num, bitNum));
    return 0;
}
