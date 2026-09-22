#include <stdio.h> /* borrow printf from the standard I/O library */
int main(void) /* execution starts here, exactly one main */
{
 printf("Hello, UFE!\n"); /* \n = new line; every statement ends ; */
 return 0; /* tell the OS: finished successfully */
}
$ gcc hello.c -o hello 
