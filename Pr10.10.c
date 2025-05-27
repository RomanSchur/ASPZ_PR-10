#include <stdio.h>      
#include <stdlib.h>    
#include <unistd.h>     
#include <sys/wait.h>   
int main() {    
    for (int i = 0; i < 3; i++) {
        pid_t pid = fork(); 
        if (pid == -1) {            
            printf("Помилка при виклику fork");           
            continue; 
        }
        if (pid == 0) {            
            printf("Дочірній процес (PID: %d) створений\n", getpid());
            exit(0); 
        }      
    }    
    while (wait(NULL) > 0) {      
    }
    printf("Батьківський процес (PID: %d) завершив очікування всіх дочірніх процесів.\n", getpid());
    return 0; 
}