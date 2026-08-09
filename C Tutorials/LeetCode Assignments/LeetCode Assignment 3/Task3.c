#include <stdio.h>
#include <string.h>
int isPalindrome(char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        if (s[left] != s[right])
            return 0;   
        left++;
        right--;
    }
    return 1;           
}
char* firstPalindrome(char words[][100], int n) {
	int i;
    for (i = 0; i < n; i++) {
        if (isPalindrome(words[i])) {
            return words[i];
        }
    }
    return ""; 
}
int main() {
    int n,i;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char words[100][100];
    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    char *result = firstPalindrome(words, n);
    if (strlen(result) == 0)
        printf("Output: \"\"\n");
    else
        printf("Output: %s\n", result);
    return 0;
}

