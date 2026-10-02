#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
    fork();
    fork();

    pid_t id_proceso_actual = getpid();

    printf("El PID de este proceso es: %d \n", id_proceso_actual);
    getchar();
    
    return 0;
}