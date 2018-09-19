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

void addTask(char** argv)
{
    if(!strcmp(argv[1], "-a")) {
        FILE *file2;
        file2 = fopen("tasks.txt", "r");
        char* printLine;
        int lines = 1;

        while((printLine = fgetc(file2)) !=  EOF) {
            if(printLine == '\n') {
                lines++;
            }
        }
        fclose(file2);

        FILE *file;
        file = fopen("tasks.txt", "a");
        int i;
        printf("Task [%s] added!\n", argv[2]);

        strcat(argv[2], "\n");
        fprintf(file, "%d - ", lines);
        fprintf(file, argv[2]);

        fclose(file);
    }
}
