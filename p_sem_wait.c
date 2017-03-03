/*****************************************************
*****************************************************/
#include "process.h"

int main(int argc, char *argv[]){
  unsigned int i,j;
  // Create a named semaphore, 
  sem_t *sem = sem_open( _SEM, O_CREAT, 0644, 0);

  p2s(PR1,"Just before s call, to be.");
  sem_wait( sem );
  p2s(PR1,"Unlocked and moving on.");

  // General delay x1
  for(i=0; i< 1000000; i++){
    for(j=0; j<1000; j++){}
  }

  p2s(PR1,"Exiting.");
  sem_unlink( _SEM );

  return 0;
}
