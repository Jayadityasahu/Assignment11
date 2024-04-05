#include <stdio.h>
#include <string.h>

char func(char *v)
{
    int ind = 0;
    for (int i = 0; v[i] != '\0'; i++)
        if (ind > 0 && v[i] == v[ind - 1]) 
            ind--;
        else
            v[ind++] = v[i];
    v[ind] = '\0';
}

int main()
{
    char s1[10];
    printf("Enter String: ");
    gets(s1);

    func(s1);

    printf("Output 1: %s\n", s1);
    return 0;
}
