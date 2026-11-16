#include "header.h"

void load(ST **ptr, int *p)
{
    FILE *fp;
    char line[200];
    int roll;
    float mark;
    char name[50];

    ST *new, *last;

    fp = fopen("student", "r");

    if (fp == NULL)
        return;

    while (fgets(line, sizeof(line), fp))
    {
        if (sscanf(line, "%d\t%49[^\t]\t%f",
                   &roll, name, &mark) == 3)
        {
            new = malloc(sizeof(ST));

            if (new == NULL)
            {
                printf("Memory allocation failed\n");
                break;
            }

            new->roll = roll;
            strcpy(new->name, name);
            new->mark = mark;
            new->next = NULL;

            if (*ptr == NULL)
            {
                *ptr = new;
            }
            else
            {
                last = *ptr;

                while (last->next != NULL)
                    last = last->next;

                last->next = new;
            }

            if (roll >= *p)
                *p = roll + 1;
        }
    }

    fclose(fp);

    printf("Previous records loaded successfully!\n");
}
