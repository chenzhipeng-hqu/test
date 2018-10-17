
#include <stdio.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
    printf("program 2 started\n");
    int i;
    for(i = 0; i<argc;i++)
        printf("%s\n",argv[i]);
    sleep(5); //do something
    printf("Promgram 2 finished!\n");
    return 0;
}
