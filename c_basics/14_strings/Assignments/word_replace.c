#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    // Find length of the string
    int length = strlen(str);

    // Reverse the whole string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    // Reverse each word in the string
    int start = 0;
    for (int i = 0; i <= length; i++) 
    {
        if (str[i] == ' ' || str[i] == '\0') 
	{
            for (int j = start; j < (start + i) / 2; j++) {
                char temp = str[j];
                str[j] = str[i - 1 -(j-start)];
                str[i - 1 - (j-start)] = temp;
        }
        start = i + 1;
        }
    }
}

int main() {
    char str[] = "hello world";
    reverseWords(str);
    printf("%s\n", str);
    return 0;
}
