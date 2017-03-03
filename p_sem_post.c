/*****************************************************
*****************************************************/
#include "process.h"

int main(int argc, char *argv[]){
  unsigned int i,j;

  //Open named semaphore
  sem_t *sem = sem_open( _SEM, 0);

  p2s(PR2,"Clearing semaphore.");
  sem_post( sem );

  // General delay x4
  for(i=0; i< 1000000; i++){
    for(j=0; j<4000; j++){}
  }
  p2s(PR2,"Cleared and exiting.");

  return 0;
}
