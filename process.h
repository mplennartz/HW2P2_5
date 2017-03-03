#ifndef PROCESS_H
#define PROCESS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <time.h>
#include <fcntl.h>

#define _SEM "/my_sem"

#define PR1 "Process 1 [Sem Wait]"
#define PR2 "Process 2 [Sem Post]"
#define PR3 "Process 3 [Sem Clean]"

void p2s(char* PR, char* string_to_print){ 
  printf("\t%s %s\n", PR, string_to_print ); 
}

#endif
