#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    FILE *fptr;
    char find;
    
    if ((fptr = fopen("emp.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
char buf[80];
int cpt,n;
printf("Donner id du client: ");
scanf("%d",&n);
printf("\n");
cpt=1;
while(cpt<=n){fgets(buf, 80, fptr);
fgets(buf, 80, fptr);
fgets(buf, 80, fptr);
cpt++;
}

    fscanf(fptr, "%[^]]", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}
