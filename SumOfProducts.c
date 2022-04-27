#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LEN 1024

void split(char *inputArr, char **outputArr, char *delim)
{

    char *temp;
    temp = strtok(inputArr, delim);

    for (int i = 0; temp != NULL; i++)
    {
        outputArr[i] = temp;
        temp = strtok(NULL, " ");
    }
}

int main(void)
{
    //  int total = 0;
    char *ch;
    FILE *fp;
    fp = fopen("products.txt", "r");
    if (fp == NULL)
    {
        perror("Failed: ");
        return 1;
    }

    char buffer[MAX_LEN];

    char *splitArr[100];
    while (fgets(buffer, MAX_LEN, fp))
    {
        // Remove trailing newline
        int total = 0;
        buffer[strcspn(buffer, "\n")] = 0;

        split(buffer, splitArr, " ");
        total = atoi(splitArr[0]) + atoi(splitArr[2]);
        printf("Total %s : %d\n", splitArr[1], total);
    }

    fclose(fp);
    return 0;
}