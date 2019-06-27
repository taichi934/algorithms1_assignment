#include <stdio.h>
#include <time.h>

int main(void)
{
    char *wday_name[] = {"日", "月", "火", "水", "木", "金", "土"};
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    FILE *fp = fopen("datetime.dat", "wb");
    fwrite(timer, sizeof(struct tm), 1, fp);
    fclose(fp);

    fp = fopen("datetime.dat", "rb");
    fread(timer, sizeof(struct tm), 1, fp);
    printf("%d年 %d月 %d日 %s曜日 %d時 %d分 %d秒", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, wday_name[timer->tm_wday], timer->tm_hour, timer->tm_min, timer->tm_sec);
    fclose(fp);
    return 0;
}