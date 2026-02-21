#include <stdio.h>

// READ A FILE
int main() {
    FILE *Pfile = fopen("input.txt", "r");
    char buffer[1024];

    if (Pfile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), Pfile) != NULL) {
        printf("%s", buffer);
    }
    fclose(Pfile);
    
    return 0;
}