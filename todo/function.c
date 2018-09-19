#include "function.h"

void printUsage()
{
    FILE *file;
    file = fopen("manual.txt", "r");

    char printLine[100];
    while(!feof(file)) {
        fgets(printLine, 100, file);
        puts(printLine);
    }
    fclose(file);
}

void listTask(char** argv)
{
    if(!strcmp(argv[1], "-l")) {
        FILE *file;
        file= fopen("tasks.txt", "r");
        char printLine[100];
        int lines = 0;

        while(!feof(file)) {
            fgets(printLine, 100, file);
            if (!ftell(file) == 0) {
                puts(printLine);
            } else {
                printf("No todos for today! :)\n");
            }
        }
        fclose(file);
    }
}
