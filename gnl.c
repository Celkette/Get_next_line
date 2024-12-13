#include<stddef.h>
#include<stdlib.h>
int    main(void)
{
    int    fd;
    char    *buffer;
    int    i;

    i = 0;
    buffer = malloc(sizeof(100000));
    fd = open("texte.txt", O_RDONLY);
    while ((buffer = get_next_line(fd)) != NULL  || i < 10) 
    {
        i++;
        printf("\nligne %d: %s",i, buffer);
    }
    free(buffer);
    return (0);
}