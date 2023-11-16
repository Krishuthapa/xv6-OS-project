#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc , char* argv[]){

  char* state = "-1";
  int n = 10;
  int p_id = 1;

  if (argc > 1 && argc < 3){
    printf(1,"Missing arguments : please pass pid and number of bytes for state.\n");

    return 0;
  }

  if (argc == 3){
    p_id = atoi(argv[1]);
    n = atoi(argv[2]);

  }else{
    printf(2,"Using default pid and number of bytes values : 1 and 10 \n");
  }

  int process_success = getprocstate(p_id,state,n);

  printf(2,"Process Success: %d\n",process_success);

  exit();
}