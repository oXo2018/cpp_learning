/*
    A process, including code, data and resources allocated to it, is created by a system call funciton called fork(). This function creates a new process that is almost identical to the original process, meaning that two processes can perform exactly the same task. However, if the inital parameter or input variables are different, the two  processes can also perform different tasks.

    To put it simply, the fork funciton is used to duplicate a process. At the beginning of a program, a process is created. When this process(code) encounters fork(), it creates a new process, which we call the child process, while the original process is referred to as the parent process. At this point, the parent and child processes coexist and continue executing the code.

    [*]One important thing to note is that after calling the fork function, both processes execute the code following the fork funciton simultaneously, while the code before that is executed by the parent process and completed.

    [*]Note: After the fork function has completed execution, if the creation of the new process is successful, two processes will be present: one is the child process, and the other is the parent process. In the child process, the fork function returns 0, while in the parent process, fork returns the process ID of the newly created child process. We can determine whether the current process is a child process or a parent process by examing the value returned by fork.

    - getppid() return process ID of the parent process.
    - getpid() return process ID of the current process.

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h> 

int main (void)
{
    pid_t pid;
    if ( (pid = fork()) < 0) printf("fork error, cannot create a subprocess"); // From this statement onwards, the subsequent code will be executed once separately by both the parent process and child process.
    else if (pid == 0) printf("child process, and the getpid() =%d\n", getpid()); //  In most cases, the PID of the child process is greater than that of the parent process by one.
    else if (pid > 0)  printf("parent process, and the getpid() =%d\n", getpid()); 
    
    return 0;
}
