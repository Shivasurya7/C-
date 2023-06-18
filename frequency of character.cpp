#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[15];

    gets(s);
    int i,j,c;

    for(i = 0; i < strlen(s); i++){
        c=1;
        for(j = i+1; j < strlen(s); j++){
            if(s[i] == s[j]){
                c++;
                s[j] = '*';
            }
        }
        if(s[i] != '*'){
            printf("%c = %d\n",s[i],c);
        }

    }

    return 0;
}
