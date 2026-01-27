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
        printf("\nChild Process 1\n");
        printf("Child PID:%d\n", getpid());
        printf("Parent PID:%d\n", getppid());
        execl("/bin/ls", "ls", "-1", NULL);
        printf("Exec failed\n");
        return 0;
    }

    pid = fork();
    if (pid == 0)
    {
        printf("\nChild Process 2\n");
        printf("Child PID:%d\n", getpid());
        printf("Parent PID:%d\n", getppid());
        execl("/bin/ls", "ls", "-1", NULL);
        printf("Exec failed\n");
        return 0;
    }

    pid = fork();
    if (pid == 0)
    {
        printf("\nChild Process 3\n");
        printf("Child PID:%d\n", getpid());
        printf("Parent PID:%d\n", getppid());
        execl("/bin/ls", "ls", "-1", NULL);
        printf("Exec failed\n");
        return 0;
    }

    wait(NULL);
    wait(NULL);
    wait(NULL);

    printf("\nAll child processes completed\n");
    printf("Parent process exiting\n");

    return 0;
}
