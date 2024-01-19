#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int main()
{
    int fd1 = open("./sample1.txt", O_RDWR);
    int fd2 = open("./sample2.txt", O_RDWR);
    int fd3 = open("./sample3.txt", O_RDWR);
    for (int i = 0; i < 1; i++)
    {
        printf("\nfd1####\n%s####\n", get_next_line(fd1));
        printf("\nfd2####\n%s####\n", get_next_line(fd2));
        printf("\nfd3####\n%s####\n", get_next_line(fd3));
    }
    //printf("%s", get_next_line(fd1));
    // printf("%s", get_next_line(fd));
    // printf("%s", get_next_line(fd));
    // printf("%s\n", get_next_line(fd));
    // printf("%s\n", get_next_line(fd));
    // printf("%s\n", get_next_line(fd));
   //system("leaks -q play");
}
