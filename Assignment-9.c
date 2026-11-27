#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile;
    FILE *destFile;
    char sourcePath[300];
    char destPath[300];
    int ch; 

    printf("Enter source file path: ");
    scanf(" %[^\n]", sourcePath);

    printf("Enter destination file path: ");
    scanf(" %[^\n]", destPath);

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s. Make sure it exists.\n", sourcePath);
        exit(EXIT_FAILURE);
    }

    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Cannot create or open destination file %s.\n", destPath);
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("\nFile copied successfully from '%s' to '%s'.\n", sourcePath, destPath);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
