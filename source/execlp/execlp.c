/*
    The execlp function searches for a file with a name that mathces the 'file' parameter within the directories specified in the PATH environment variable. Once it finds the file, it executes that file, using the second and subsequent parameters as the file's argv[0], argv[1], and so on. The last parameter must be terminated with a null pointer(NULL).

    int execlp (const char * filename, const char *arg, ...);

    If the execution is successful, the funciton will not return; if it fails, it will return -1 directly, and the reason for failure will be stored in the 'errno' variable.
*/

#include <unistd.h>

int main (int argc,char * argv[])
{
    execlp("pwd", "", NULL); // The PATH environment include /usr/bin, so the pwd can be find. 
    // Why the second parameter corresponds to an empty string is not actually important. You cam pass any string, but it must be present; It cannot be NULL, or else it will result in an error during execution.

    return 0;

}