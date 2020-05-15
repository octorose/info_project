#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    FILE *fptr;
    char find;
    char buf[80];
	int cpt,n,y;
	
    if ((fptr = fopen("emp.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }

    // reads text until newline is encountered
do{
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
    printf("Data from the file:\n%s\n", c);
    printf("Voulez vous chercher un autre client: 1: Oui / 0: Non\n");
    scanf("%d",&y);
    rewind(fptr);
}while(y!=0);
    fclose(fptr);
	// return to mainmenu
	/*if(n==0)
	{
	system("menu.exe")
	}*/
    return 0;
}
