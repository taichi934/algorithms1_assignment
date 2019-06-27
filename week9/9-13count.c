#include <stdio.h>
int main(void)
{
    FILE *fp;
    char filename[] = "exec_count.txt";
    if ((fp = fopen(filename, "r")) == NULL)
    {
        if ((fp = fopen(filename, "w")) == NULL)
        {
            printf("cannot read");
        }
        else
        {
            fprintf(fp, "このプログラムが実行されたのは%d回目です\n", 1);
            fclose(fp);
        }
    }
    else
    {
        int count;
        fscanf(fp, "%d", &count);
        fclose(fp);
        if ((fp = fopen(filename, "w")) == NULL)
            printf("cannot read");
        else
        {
            fprintf(fp, "このプログラムが実行されたのは%d回目です\n", ++count);
            fclose(fp);
        }
    }

    return 0;
}