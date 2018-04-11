#include "main.h"

void poop()
{
   printf("Pooped\n");
}

void thread_create( thread_t *tid, void (*func)( void *ptr1), void *ptr2 )
{
   printf("Created the thread.\n");
}

void thread_yield(void *thread)
{
   printf("Yielding the thread.\n");
}


void thread_exit(void *thread)
{
   printf("Exiting the thread.\n");
}

int main(int argc, char* argv[])
{
   thread_t *tid1;
   thread_t *tid2; 
   
   thread_create(tid1, &poop, NULL);  
   thread_create(tid2, &poop, NULL);
   
   thread_exit(tid1);
   thread_exit(tid2);

   return 0;
}
