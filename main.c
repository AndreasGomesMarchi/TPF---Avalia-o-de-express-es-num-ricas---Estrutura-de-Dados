#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "expressao.h"

int main(void) {
    char pos1[] = "2 3 + 2 ^";
    char *in1 = getFormaInFixa(pos1);
    float v1 = getValorPosFixa(pos1);
    printf("POS-FIXA: %s\n", pos1);
    printf(" -> INFIXA: %s\n", in1);
    printf(" -> VALOR: %.2f (esperado 25.00)\n\n", v1);
    free(in1);

    char pos2[] = "60 cos 2 *";
    char *in2 = getFormaInFixa(pos2);
    float v2 = getValorPosFixa(pos2);
    printf("POS-FIXA: %s\n", pos2);
    printf(" -> INFIXA: %s\n", in2);
    printf(" -> VALOR: %.2f (esperado 1.00)\n\n", v2);
    free(in2);

    char pos3[] = "16 raiz 8 /";
    char *in3 = getFormaInFixa(pos3);
    float v3 = getValorPosFixa(pos3);
    printf("POS-FIXA: %s\n", pos3);
    printf(" -> INFIXA: %s\n", in3);
    printf(" -> VALOR: %.2f (esperado 0.50)\n\n", v3);
    free(in3);

    char pos4[] = "100 log 1 -";
    char *in4 = getFormaInFixa(pos4);
    float v4 = getValorPosFixa(pos4);
    printf("POS-FIXA: %s\n", pos4);
    printf(" -> INFIXA: %s\n", in4);
    printf(" -> VALOR: %.2f (esperado 1.00)\n\n", v4);
    free(in4);

    char pos5[] = "2 3 ^ 45 tg +";
    char *in5 = getFormaInFixa(pos5);
    float v5 = getValorPosFixa(pos5);
    printf("POS-FIXA: %s\n", pos5);
    printf(" -> INFIXA: %s\n", in5);
    printf(" -> VALOR: %.2f (esperado 9.00)\n\n", v5);
    free(in5);

    char pos6[] = "30 sen 60 sen +";
    char *in6 = getFormaInFixa(pos6);
    float v6 = getValorPosFixa(pos6);
    printf("POS-FIXA: %s\n", pos6);
    printf(" -> INFIXA: %s\n", in6);
    printf(" -> VALOR: %.2f (esperado ≈ 1.37)\n\n", v6);
    free(in6);

    return 0;
}