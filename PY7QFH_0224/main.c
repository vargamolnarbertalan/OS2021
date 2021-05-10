#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fadat;
    fadat=fopen("py7qfh.txt", "w");
    fprintf(fadat, "Varga-Molnár Bertalan\n");
    fprintf(fadat, "Programtervezõ Informatika\n");
    fprintf(fadat, "PY7QFH\n");
    fclose(fadat);
    return 0;
}
