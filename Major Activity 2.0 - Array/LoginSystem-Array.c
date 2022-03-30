#include <stdio.h> 
#include <string.h> 
 
/*Sir di ma bangbang HAHHAHAH kini ray ma kaya*/
 
int main() 
{ 
    char username[15]; 
    char password[12]; 
 
    printf("Enter your username:\n"); 
    scanf("%s",&username); 
 
    printf("Enter your password:\n"); 
    scanf("%s",&password); 
 
    if(strcmp(username,"bogart")==0){ 
        if(strcmp(password,"123")==0){ 
 
        printf("\nLogin Success! Welcome bogart"); 
 
 
        }else{ 
    printf("\nWrong password"); 
} 
    }else{ 
    printf("\nUser doesn't exist"); 
} 
    return 0; 
} 
