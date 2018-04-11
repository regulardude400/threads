#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <ucontext.h>


typedef unsigned long int thread_t;

//Function creates a new thread to execute.
void thread_create( thread_t *, void (*func)( void *), void * );

//This function ends the time slice for the calling thread.  Process execution should continue with another thread.  If no other thread exists, then execution should continue with the same thread.
void thread_yield(void *);

//This function exis the calling thread.  Process execution should continue with another thread.  If there is no other thread to execute, the process should exit.
void thread_exit(void *);


#endif
