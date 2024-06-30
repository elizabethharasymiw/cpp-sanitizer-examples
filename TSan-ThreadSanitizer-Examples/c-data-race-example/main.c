/*
 * Written to show off how ThreadSanitizer displays data races it finds
 */

#include <pthread.h>

int Global;

void *Thread1(void *x){
  Global = 42;
  return x;
}

int main(){
  for(int i = 0; i < 100; i++){
    pthread_t t;
    pthread_create(&t, NULL, Thread1, NULL);
    Global = 43;
    pthread_join(t, NULL);
  }
  return Global;
}
