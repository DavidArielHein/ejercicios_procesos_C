#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t pid_hijo = getpid();
    pid_t pid_padre = getppid();

    printf("El PID de este proceso es %d\n", pid_hijo);
    printf("El PID del proceso padre (PPID) es: %d\n", pid_padre);
    getchar();

    return 0;
}