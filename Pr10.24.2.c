#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <fcntl.h>  

int main() {     
    int fd = open("test2.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);    

    pid_t pid = fork(); 
    if (pid == 0) {       
        sleep(1);         
        write(fd, "Child\n", 6); 
        close(fd); 
        exit(0); 
    } else {      
        sleep(2);        
        write(fd, "Parent\n", 7);      
        close(fd);         
    }       
    return 0;
}