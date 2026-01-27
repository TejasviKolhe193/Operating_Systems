#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;

    printf("Parent Process Started\n");
    printf("Parent PID:%d\n", getpid());

    pid = fork();
    if (pid == 0)
    {
        printf("Hello im child 1\n");
        printf("Child PID:%d Parent PID:%d\n", getpid(), getppid());
        return 0;
    }

    pid = fork();
    if (pid == 0)
    {
        printf("Hello im child 2\n");
        printf("Child PID:%d Parent PID:%d\n", getpid(), getppid());
        return 0;
    }

    pid = fork();
    if (pid == 0)
    {
        printf("Hello im child 3\n");
        printf("Child PID:%d Parent PID:%d\n", getpid(), getppid());
        return 0;
    }

    pid = fork();
    if (pid == 0)
    {
        printf("Hello im child 4\n");
        printf("Child PID:%d Parent PID:%d\n", getpid(), getppid());
        return 0;
    }

    pid = fork();
    if (pid == 0)
    {
        printf("Hello im child 5\n");
        printf("Child PID:%d Parent PID:%d\n", getpid(), getppid());
        return 0;
    }

    wait(NULL);
    wait(NULL);
    wait(NULL);
    wait(NULL);
    wait(NULL);

    printf("Parent process exiting\n");

    return 0;
}
