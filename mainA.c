
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv)
{
    printf("program 1 started\n");
    char *newargv[] = { "hello", "world" };
    char *newenviron[] = { NULL };
    int pid=fork();
            printf("pid=%d, ppid=%d \r\n", getpid(), getppid());
    if(pid < 0)
        exit(EXIT_FAILURE);
    else if(pid == 0) //子进程执行这里    
    {
        if (execlp("./mainB", "echo", NULL) < 0) //打开同级目录下的main2程序
        {
            perror("execve"); /* execve() only returns on error */
            exit(EXIT_FAILURE);
        }
        else
        {
        }
    }
    else
    {
        //父进程执行这里    
    }

    pid = wait(&pid);    
    printf("pid=%d \r\n", pid);

    //父进程继续
    sleep(3); //do something
    /*while(1)*/
    {
        
    }
    printf("Promgram 1 finished!\n");
    return 0;
}

