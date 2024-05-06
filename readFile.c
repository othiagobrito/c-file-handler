#include <stdio.h>

void readFile(char[]);

int main()
{
    readFile("src/some-file.txt");

    return 0;
}

void readFile(char filename[])
{
    int size = 255;
    char fileRow[size];

    FILE *file;
    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("\"%s\" file does not exist", filename);
        return;
    }

    while (fgets(fileRow, size, file))
    {
        printf("%s", fileRow);
    }

    fclose(file);
}
