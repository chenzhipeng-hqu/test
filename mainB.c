
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

#define PIPENAME "pipetest"

int main()
{
    printf("\033[31;43m## [CZP] %s %s at %d\033[0m\n", __FILE__, __FUNCTION__, __LINE__);
    // 读打开管道
    int fd = open(PIPENAME, O_RDONLY);
    printf("\033[31;43m## [CZP] %s %s at %d\033[0m\n", __FILE__, __FUNCTION__, __LINE__);
    if(-1 == fd)
    {
        perror("open");
        return -1;
    }
    printf("\033[31;43m## [CZP] %s %s at %d\033[0m\n", __FILE__, __FUNCTION__, __LINE__);

    int num = 0;
    int i = 0;
    for(i = 0; i < 10; i++)
    {
        read(fd, &num, sizeof(int));
        printf("%d\n", num);
        fflush(stdout); // 强制刷新输出缓冲区
    }

    printf("\n");
    close(fd);

    return 0;

}
