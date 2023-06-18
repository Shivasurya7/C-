#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,e=0,o=0,t,r,em=1,om=1;
    scanf("%d",&n);

    while(n > 0){
        r = n%10;
        if(r%2 == 0){
            t = e;
            e = r*em;
            e += t;
            em *= 10;

        }
        else{
            t = o;
            o = r*om;
            o += t;
            om *= 10;
        }
        n /= 10;
    }

    printf("odd = %d\n",o);
    printf("even = %d\n",e);
    return 0;
}
