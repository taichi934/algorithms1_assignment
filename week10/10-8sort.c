#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_buff(char buff[])
{
    int i = 0;
    while (buff[i])
    {
        buff[i++] = '\0';
    }
}

int array_len(char buf[][20])
{
    int i = 0;
    while (buf[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
    return i;
}
int read_word(FILE *fp, char buf[])
{
    int ch;
    int index = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        switch (ch)
        {
        case ' ':
        case '.':
        case ',':
        case '\n':
            if (index > 0)
            {
                buf[index] = '\0';
                return index;
            }
            else
                continue;
        default:
            buf[index++] = ch;
            //word_exists = 1;
        }
    }
    return index;
}

void print_buf(char buf[500][20], int len)
{
    for (int i = 0; i < len; i++)
    {
        //  break;
        printf("%s\n", buf[i]);
    }
}

void ssort(char buf[][20], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < len; j++)
        {

            // printf("%s\n", min);

            if (strcmp(buf[j], buf[min]) < 0)
            {
                min = j;
            }
        }
        //printf("%s\n", buf[i]);

        if (i != min)
        {
            char temp[20];

            strcpy(temp, buf[i]);
            strcpy(buf[i], buf[min]);
            strcpy(buf[min], temp);
        }
    }
}

int main(void)
{
    char buf[500][20];
    FILE *fp;
    fp = fopen("anne_short.txt", "r");
    if (fp == NULL)
    {
        printf("File read error !\n");
        exit(1); //異常終了
    }
    int i = 0;
    while (read_word(fp, buf[i]) > 0)
    {
        i++;
    }
    fclose(fp);

    ssort(buf, i);

    print_buf(buf, i);
    return 0;
}