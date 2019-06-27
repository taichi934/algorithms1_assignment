#include <stdio.h>
#include <time.h>

int main(void)
{
    FILE *fp;
    int hour, min, sec, year, mon, day, wday;
    char *wday_name[] = {"日", "月", "火", "水", "木", "金", "土"};
    if ((fp = fopen("datetime.txt", "r")) == NULL)
    {
        printf("cannot read");
    }
    else
    {
        fscanf(fp, "%d%d%d%d%d%d%d", &hour, &min, &sec, &year, &mon, &day, &wday);
        printf("読みだした日時は　20%d年 %d月 %d日 %s曜日 %d時 %d分 %d秒\n", year, mon, day, wday_name[wday], hour, min, sec);
        fclose(fp);
    }
    return 0;
}