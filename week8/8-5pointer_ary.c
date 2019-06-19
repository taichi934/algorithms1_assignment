#include <stdio.h>

int main(void)
{
    char *p = "123";
    printf("p=\"%s\"\n", p);
    p = "456" + 1;
    printf("p=\"%s\"\n", p);
    //printf("%d\n");
    //scanf("%d", );
    return 0;
}