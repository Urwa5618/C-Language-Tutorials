#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); 

    char **strings = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++) {
        char buffer[1000];
        printf("Enter string %d: ", i+1);
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = '\0';
        strings[i] = (char*)malloc((strlen(buffer)+1) * sizeof(char));
        strcpy(strings[i], buffer);
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(strings[i], strings[j]) > 0) {
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
    printf("Sorted strings:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]);
    }
    free(strings);
    return 0;
}
