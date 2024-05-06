#include <stdio.h>

void writeFile(char[]);

int main()
{
    writeFile("src/some-file.txt");

    return 0;
}

void writeFile(char filename[])
{
    FILE *file;
    file = fopen(filename, "w");

    fprintf(file, "File created.");

    fclose(file);
}
