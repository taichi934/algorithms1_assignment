#include <stdio.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    char filename[] = "history.txt";

    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    fp = fopen(filename, "a");
    fprintf(fp, "%d年 %d月 %d日 %d時 %d分 %d秒　にプログラムが実行されました。\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
    fclose(fp);

    return 0;
}