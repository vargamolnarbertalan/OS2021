#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fadat;
    fadat=fopen("py7qfh.txt", "w");
    fprintf(fadat, "Varga-Moln�r Bertalan\n");
    fprintf(fadat, "Programtervez� Informatika\n");
    fprintf(fadat, "PY7QFH\n");
    fclose(fadat);
    return 0;
}
