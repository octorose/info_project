#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    FILE *fp=fopen("emp.txt","r");
    char tmp[256]={0x0};
    while(fp && fgets(tmp, sizeof(tmp), fp))
    {
        if (strstr(tmp, "Name"))
            printf("%s", tmp);

    }
    if(fp) fclose(fp);
    return 0;
}
