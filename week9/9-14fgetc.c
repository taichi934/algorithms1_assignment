#include <stdio.h>

int main(void)
{
    FILE *fpr, *fpw;
    int ch;
    char rfilename[] = "anne_short.txt";
    char wfilename[] = "anne_words.txt";

    if ((fpr = fopen(rfilename, "r")) == NULL)
    {
        printf("cannot read");
    }
    else
    {
        if ((fpw = fopen(wfilename, "w")) == NULL)
        {
            printf("cannot read");
        }
        else
        {
            while ((ch = fgetc(fpr)) != EOF)
            {
                switch (ch)
                {
                case ' ':
                    fputc('\n', fpw);
                    break;
                case '.':
                    break;
                case ',':
                    break;
                default:
                    fputc(ch, fpw);
                }
            }
            fclose(fpw);
        }
        fclose(fpr);
    }

    return 0;
}