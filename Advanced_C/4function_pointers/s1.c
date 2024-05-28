#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 20

char names[MAX_NAMES][MAX_NAME_LENGTH];
int num_names;

void (*sort_func)(void) = NULL;

void sort_with_case_sensitivity(void) {
    int i, j;
    for (i = 0; i < num_names; i++) {
        for (j = i + 1; j < num_names; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

void sort_without_case_sensitivity(void) {
    int i, j;
    for (i = 0; i < num_names; i++) {
        for (j = i + 1; j < num_names; j++) {
            if (strcasecmp(names[i], names[j]) > 0) {
                char temp[MAX_NAME_LENGTH];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    int option;
    printf("Enter names (type 'q' to quit): \n");
    printf("Enter option (1: sort with case sensitivity, 2: sort without case sensitivity): ");
    scanf("%d", &option);

    while (1) {
        char name[MAX_NAME_LENGTH];
        fgets(name, MAX_NAME_LENGTH, stdin);
        name[strcspn(name, "\n")] = 0; // remove newline character
        if (strcmp(name, "q") == 0) break;
        if (num_names < MAX_NAMES) {
            strcpy(names[num_names], name);
            num_names++;
        } else {
            printf("Maximum number of names reached. Quitting.\n");
            break;
        }
    }

    switch(option) {
        case 1:
            sort_func = sort_with_case_sensitivity();
            break;
        case 2:
            sort_func = sort_without_case_sensitivity();
            break;
        default:
            printf("Invalid option. Quitting.\n");
            return -1;
    }

    if (sort_func != NULL) {
        sort_func();
        printf("Sorted names:\n");
        for (int i = 0; i <
