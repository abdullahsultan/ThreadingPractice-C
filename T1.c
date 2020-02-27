#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

struct thread_data{
    int time_arg;
    char data;
};

void *my_thread(void* data)
{
  (thread_data*) data;
  int x=0;
  while(x<=100000)
  {
    printf("The Data:%c \n",data.data);
    sleep(data.time_arg);
  }
}



int main(int argc, char const *argv[]) {
  thread_data t_data;
  pthread_t threadID;
  pthread_create(&threadID,NULL,my_thread,(void*)t_data);


  return 0;
}
