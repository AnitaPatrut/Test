#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#define MAX_COUNT 2

void ChildProccess(void);
void ParentProccess(void);

int main(){
  pid_t pid;
  pid=fork();
  if(pid==0){
    ChildProccess();
  }else
    {
      ParentProccess();
    }
  return 0;
}

void ChildProccess(void){

  int i;
  for(i=1;i<=MAX_COUNT; i++) printf("This line is from child, value=%d\n",i);
  printf("Child proccess is done!");
}

void ParentProccess(void){

  int i;
  for(i=1;i<=MAX_COUNT; i++) printf("This line is from parent, value=%d\n",i);
  printf("Parent proccess is done!");
}
