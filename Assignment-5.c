#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[50], str2[50], copy[50];
    int choice = 0;

    while (choice != 5) {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Length of string\n");
        printf("2. Copy of string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter string: ");
                scanf("%49s", str1);
                printf("Length = %zu\n", strlen(str1));
                break;

            case 2:
                printf("Enter string: ");
                scanf("%49s", str1);
                strcpy(copy, str1);
                printf("Copied string: %s\n", copy);
                break;

            case 3:
                printf("Enter string 1: ");
                scanf("%49s", str1);
                printf("Enter string 2: ");
                scanf("%49s", str2);
                strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                printf("Enter string 1: ");
                scanf("%49s", str1);
                printf("Enter string 2: ");
                scanf("%49s", str2);
                if (strcmp(str1, str2) == 0) {
                    printf("Strings are equal\n");
                } else {
                    printf("Strings are unequal\n");
                }
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid input\n");
                break;
        }
    }

    return 0;
}
