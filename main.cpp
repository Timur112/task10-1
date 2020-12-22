#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char* noprobels(char *s)
{
    char *p=strtok(s," ");
    char *sn;
    sn=(char*) malloc(40*sizeof(char));
    strcpy(sn,p);
    while (p != NULL)
    {
        p=strtok(NULL," ");
        if(p != NULL)
        {
            if(*p=='.')
            {
                strcat(sn,p);
            }
            else
            {
                strcat(sn," ");
                strcat(sn,p);
            }
        }
    }
    return sn;
}
int main()
{
    char s[40];
    printf("¬ведите вашу строку\n");
    gets(s);
    printf("%s",noprobels(s));
    return 0;
}
