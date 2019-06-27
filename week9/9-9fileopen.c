#include <stdio.h>
#include <string.h>

int main(void)
{
    char fileName[128];
    scanf("%s", fileName);
    // char *filePath1 = strcat("\"", fileName);
    // char *filePath2 = strcat(filePath1, "\"");
    // FILE *fp = fopen(filePath2, "r");
    FILE *fp = fopen(fileName, "r");
    if (!fp)
    {
        printf("どのファイルは存在しません。\n");
    }
    else
    {
        printf("そのファイルは存在します。\n");
        fclose(fp);
    }
    return 0;
} //not sure about the commented out lines