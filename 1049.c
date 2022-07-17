
#include <stdio.h>
#include <string.h>
int main()
{

    char fi[30];
    char se[30];
    char th[30];
    scanf("%s %s %s", fi, se, th);
    if (fi[0] == 'v' && se[0] == 'a' && th[0] == 'c')
    {
        printf("aguia\n");
    }
    else if (fi[0] == 'v' && se[0] == 'a' && th[0] == 'o')
    {
        printf("pomba\n");
    }
    else if (fi[0] == 'v' && se[0] == 'm' && th[0] == 'o')
    {
        printf("homem\n");
    }
    else if (fi[0] == 'v' && se[0] == 'm' && th[0] == 'h')
    {
        printf("vaca\n");
    }
    else if (fi[0] == 'i' && se[0] == 'i' && th[4] == 't')
    {
        printf("pulga\n");
    }
    else if (fi[0] == 'i' && se[0] == 'i' && th[4] == 'i')
    {
        printf("lagarta\n");
    }
    else if (fi[0] == 'i' && se[0] == 'a' && th[0] == 'h')
    {
        printf("sanguessuga\n");
    }
    else
    {
        printf("minhoca\n");
    }

    return 0;
}