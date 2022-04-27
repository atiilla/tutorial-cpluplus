#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define GREEN(string) "" string ""


void SaveTextIntoFile(char message[1000])
{

    FILE *fp;

    if (fp == NULL)
    {
        printf("Error!");
        exit(1);
    }

    fp = fopen("muhittin.txt", "w+");
    fprintf(fp, "%s >", message);
    fclose(fp);
}

void ToolsMenu(void (*ptr)())
{
    int selectedOption;
    bool toolsBool = true;
    char filename;
    char message;
    char sentence[1000];

    while (toolsBool)
    {
        printf("\n[%d] " GREEN("Sub Menu1") "\n[%d] " GREEN("Save Text") "\n[%d] " GREEN("Exit") "\n > ", 1, 2, 3);

        scanf("%d", &selectedOption);

        switch (selectedOption)
        {
        case 1:
            (*ptr)();
            break;
        case 2:
            printf("\nEnter filename: ");
            scanf("%s", &filename);
            char *fil3name = filename;
            char *local_file = ("./%s",fil3name);
            char *ts2 = strdup(local_file);
            char *file_name = basename(ts2);
            printf(file_name);
            printf("Enter a sentence:\n");
            scanf("%s", &sentence);
            SaveTextIntoFile(sentence);
            break;
        case 3:
            printf("Bye bye");
            toolsBool = false;
            break;
        default:
            break;
        }
    }
}

void ToolsSubMenu()
{
    int selectedOption;
    bool toolsSubBool = true;
    while (toolsSubBool)
    {
        printf("\n[%d] " GREEN("Tools Sub Menu1") "\n[%d] " GREEN("Tools Sub Menu2") "\n[%d] " GREEN("Exit") "\n > ", 1, 2, 3);
        scanf("%d", &selectedOption);

        switch (selectedOption)
        {
        case 1:
            printf("tools sub menu1");

        case 2:
            printf("tools menu2");
            break;
        case 3:
            printf("Bye bye");
            toolsSubBool = false;
            break;
        default:
            break;
        }
    }
}

void MainSubMenu()
{
    int selectedOption;
    bool mainSubBool = true;
    while (mainSubBool)
    {
        printf("\n[%d] " GREEN("Main Sub Menu1") "\n[%d] " GREEN("Main Sub Menu2") "\n[%d] " GREEN("Exit") "\n > ", 1, 2, 3);
        scanf("%d", &selectedOption);

        switch (selectedOption)
        {
        case 1:
            printf("Main sub menu1");

        case 2:
            printf("Main menu2");
            break;
        case 3:
            printf("Bye bye");
            mainSubBool = false;
            break;
        default:
            break;
        }
    }
}



void MainMenu(void (*ptr)())
{
    int selectedOption;
    bool mainMenuBool = true;
    while (mainMenuBool)
    {
        printf("\n[%d] " GREEN("Sub Menu1") "\n[%d] " GREEN("Sub Menu2") "\n[%d] " GREEN("Exit") "\n > ", 1, 2, 3);
        scanf("%d", &selectedOption);

        switch (selectedOption)
        {
        case 1:
            (*ptr)();
            break;
        case 2:
            printf("sub menu2");
            break;
        case 3:
            mainMenuBool = false;
            break;
        default:
            break;
        }
    }
}

int main()
{
    int selectedOption;
    bool mainBool = false;

    while (!mainBool)
    {
        printf("\n[%d] " GREEN("MAIN MENU") "\n[%d] " GREEN("TOOLS") "\n > ", 1, 2);
        scanf("%d", &selectedOption);
        switch (selectedOption)
        {
        case 1:
            MainMenu(MainSubMenu);
            break;
        case 2:
            ToolsMenu(ToolsSubMenu);
            break;
        default:
            printf("default");
        }
    }
}