#include <stdio.h>

#include <stdlib.h>

int main()

{

    FILE *fp;

    fp = fopen("D:\\C FILEabc.txt", "r+");

    while (!feof(fp))

        if (fgetc(fp) == '*')

        {

            fseek(fp, -1, 1);

            fputc('$', fp);
            fflush(fp);
        }

    fclose(fp);
    return 0;
}

