#include <stdio.h>
#include <string.h>


int main()
{
    char str[] = " insert key value    ";
    char * token;
    token = strtok(str, " ");
    token = strtok(NULL, " ");
    token = strtok(NULL, " ");
    if(token == NULL)
    {
        printf("Didn't get anything\n");
    }
    else
    {
        printf("%s\n", token);
    }
    return 0;
}
