
void to_lowercase(char *str) {
    while (*str) {
        *str = tolower((unsigned char)*str); // Cast to unsigned char for safety
        str++;
    }
}

void remove_non_alphanumeric(char *str) {
    int i = 0; // Tracks the current read position
    int j = 0; // Tracks the next write position

    while (str[i] != '\0') {
        // Check if the current character is a letter or a digit
        if (isalnum((unsigned char)str[i])) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    
    // Explicitly add the null terminator to mark the end of the new string
    str[j] = '\0'; 
}
bool isPalindrome(char* s) {
     if(!s)  return true;
    remove_non_alphanumeric(s);
    to_lowercase(s);
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] != s[len - i - 1])
        {
            return false;
        }
    
    }
    return true;

    
}