#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() {
    pid_t pid_fork;
    int status;
    pid_fork = fork(); 

    if (pid_fork < 0) {       
        printf("Помилка при виклику fork");
        exit(EXIT_FAILURE);
    } else if (pid_fork == 0) {        
        printf("Дочірній процес (PID: %d).\n", getpid());        
        exit(42);
    } else {        
        wait(&status); 
        if (WIFEXITED(status)) {            
            printf("Дочірній процес завершився: %d\n", WEXITSTATUS(status));
        } else {            
            printf("Дочірній процес :не завершився нормально.\n");             
        }
    }    
    return 0; 
}