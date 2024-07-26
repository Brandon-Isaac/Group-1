#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void forkInstance(){
    if(fork() == 0){
        printf("Child Process: %d\n", getpid());
    } else {
        printf("Parent Process: %d\n", getpid());
    }
}

int main()
{
    forkInstance();
    printf("This is fork() system call\n");

    return 0;
}