#include "get_next_line_bonus.h"

int main()
{
    int fd;
    int fd1;
    int i;
    char *line;

    i = 0;
    fd = open("text1.txt", O_RDONLY);
    fd1 = open("text.txt", O_RDONLY);
    //int fd = 0;
    if (fd < 0)
    {
        printf("Error");
    }
    while (i < 10)
    {
        line = get_next_line(fd);
        printf("%s", line);
        // free(line);

        line = get_next_line(fd1);
        printf("%s", line);
        free(line);
        i++;
    }
    close(fd);
    close(fd1);
    return 0;

}