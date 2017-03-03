/*****************************************************
*****************************************************/
#include "process.h"

int main(int argc, char *argv[]){

  sem_t *sem = sem_open( _SEM, 0);

  p2s(PR3,"Clearing semaphore.");
  sem_post( sem );
  p2s(PR3,"Unlinking named semaphore.");
  sem_unlink( _SEM );
  p2s(PR3,"Exit.");

  return 0;
}
