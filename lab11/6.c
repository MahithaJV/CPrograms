#include <stdio.h>
#include <stdlib.h>

void copy_all_contents(const char *source_file, const char *destination_file) {
    FILE *source = fopen(source_file, "r");
    FILE *destination = fopen(destination_file, "w");

    if (source == NULL || destination == NULL) {
        printf("Error opening file(s).\n");
        exit(1);
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);
    printf("All contents copied successfully.\n");
}

int main() {
    copy_all_contents("source.txt", "destination_all.txt");
    return 0;
}
