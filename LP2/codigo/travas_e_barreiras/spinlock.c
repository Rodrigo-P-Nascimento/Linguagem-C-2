/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdatomic.h>
#include <pthread.h>

#define QTD_THREADS 5
#define QTD_SOMA 10


float global = 0;
int lock = 0;

void *f_add_global (void *p)
{
  int count = 0;
  while (count < QTD_SOMA)
    {
      while (__atomic_test_and_set (&lock, 0));
      //__sync_test_and_set(&lock, 0)
      //__atomic_flag_test_and_set(&lock)
      //atomic_flag_test_and_set_explict(&lock, 0)
      global++;
      lock = 0;
	  count++;
    }
}

int main ()
{
  pthread_t threads[QTD_THREADS];
  
  for (int i = 0; i < QTD_THREADS; i++) {
    pthread_create(&threads[i], NULL,  f_add_global, NULL);
  }
  
  for (int i = 0; i < QTD_THREADS; i++) {
      pthread_join(threads[i], NULL);
  }
  
  printf("Valor de global: %f", global);

  return 0;
}