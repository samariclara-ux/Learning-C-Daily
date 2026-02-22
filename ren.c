#include <stdio.h>

//  WRITE A FILE
int main() {
    FILE *Pfile = fopen("C:\\Users\\HP\\Desktop\\output.txt", "w");
char text[] = "CONSISTENCY TURN\n AVERAGE INTO MILESTONES!.\n";

    if (Pfile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(Pfile, "%s", text);
    fclose(Pfile);
    
    printf("File was written successfully.\n");
    return 0;
}