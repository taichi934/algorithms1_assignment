#include <stdio.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    char filename[] = "history.txt";

    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    int count;

    if ((fp = fopen(filename, "r")) == NULL)
        count = 1;

    fp = fopen(filename, "a");
    if (count == 1)
    {
        fprintf(fp, "このプログラムは初めて実行されました\n現在　%d年 %d月 %d日 %d時 %d分 %d秒\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
        count++;
    }
    else
    {
        fprintf(fp, "このプログラムの実行は%d回目です\n現在　%d年 %d月 %d日 %d時 %d分 %d秒\n", count++, timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec);
    }
    fclose(fp);

    return 0;
}