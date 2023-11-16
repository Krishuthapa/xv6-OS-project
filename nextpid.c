#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(void){
  printf(1,"The next pid for the process is %d\n", getnextpid());

  exit();
}