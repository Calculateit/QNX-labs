#include <stdio.h>
#include <time.h>
#include <sync.h>
#include <sys/neutrino.h>
barrier_t barrier;
//int data_ready = 0;
//int inf = 0;
//pthread mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
//pthread cond t condvar = PTHREAD_COND_INITIALIZER;
void *thread1(void * not_used) {
    time_t now;
    char buf[27]; 
    time(&now);
    printf("Daragan Dmitrii I993 - potok 1\n");
    printf("Potok 1, vremia starta %s \n", ctime_r(&now, buf));
    sleep(3);
    barrier_wait(&barrier);
    time(&now);
    printf("barier v potoke 1, vremia srabativania 8s \n", ctime_r(&now, buf));
}

void *thread2 (void * not_used) {
    time_t now;
    char buf[27];
    time(&now);
    printf("Daragan Dmitrii I993 - potok 2\n");
    printf("Potok 2, vremia starta %s \n", ctime_r(&now, buf));
    sleep(6);
    barrier_wait(&barrier);
    time(&now);
    printf("barier v potoke 2 , vremia srabativania 3s In", ctime_r(&now, buf));
}


int main() {
    time_t now;
    char buf[271];
    barrier_init (&barrier, NULL, 3);
    printf("Start \n");
    pthread_create(NULL, NULL, thread1, NULL);
    pthread_create(NULL, NULL, thread2, NULL);
    time(&now);
    printf("Main(): oshidanie y bariera, vremia 8s\n", ctime_r(&now, buf));
    barrier_wait (&barrier);
    time(&now);
    printf("barier v main() , vremia srabativania 8s \n", ctime_r(&now, buf));
    sleep(5);
    return 0;
}
