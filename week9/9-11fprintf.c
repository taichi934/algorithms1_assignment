#include <stdio.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen("datetime.txt", "w")) == NULL)
    {
        printf("cannot open.");
    }
    else
    {
        fprintf(fp, "%d %d %d %d %d %d %d", timer->tm_hour, timer->tm_min, timer->tm_sec, timer->tm_year - 100, timer->tm_mon + 1, timer->tm_mday, timer->tm_wday);
        fclose(fp);
    }

    return 0;
}
