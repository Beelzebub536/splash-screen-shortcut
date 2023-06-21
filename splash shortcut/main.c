#include <stdio.h>
#include <stdlib.h>
int main(void) {
    FILE * pF= fopen("C:\\Users\\USER\\Desktop\\qwer.txt","r");
    char line[255];
    while(fgets(line,255,pF)!= NULL) {
            for(int i = 0; i < strlen(line);i++)
            {
                if(line[i]=='\n')
                {
                    line[i] = ' ';
                }
            }
        printf("printf(\"%s\\n\");\n",line);

    }
    fclose(pF);
    return 0;
}
