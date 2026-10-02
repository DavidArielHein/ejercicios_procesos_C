#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t id_proceso_creado = fork();

    if (id_proceso_creado < 0) {
        printf("Error al ejecutar fork. Saliendo");
        return 1;
    }
    else if (id_proceso_creado == 0) {
        printf("Soy el proceso hijo\n");
        printf("PID del Hijo: %d\n", getpid());
        printf("PID del Padre (PPID): %d\n", getppid());

        printf("Hijo esperando. Presionar cualquier tecla...\n");
        getchar();
    }
    else {
        printf("Soy el proceso padre\n");
        printf("PID del Padre: %d\n", getpid());
        printf("PID del Hijo: %d\n", id_proceso_creado);

        printf("Padre esperando. Presionar cualquier tecla...\n");
        getchar();
    }
}