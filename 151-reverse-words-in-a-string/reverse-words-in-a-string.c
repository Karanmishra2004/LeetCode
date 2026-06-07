char* reverseWords(char* s) {
    int n = strlen(s);

    // Step 1: Remove extra spaces
    int i = 0, j = 0;

    while (s[i] == ' ')
        i++;

    while (i < n) {
        if (s[i] == ' ' && (j == 0 || s[j - 1] == ' ')) {
            i++;
            continue;
        }
        s[j++] = s[i++];
    }

    if (j > 0 && s[j - 1] == ' ')
        j--;

    s[j] = '\0';

    // Step 2: Reverse entire string
    int left = 0, right = j - 1;
    char temp;

    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }

    // Step 3: Reverse each word
    int start = 0;
    for (i = 0; ; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            left = start;
            right = i - 1;

            while (left < right) {
                temp = s[left];
                s[left] = s[right];
                s[right] = temp;
                left++;
                right--;
            }

            if (s[i] == '\0')
                break;

            start = i + 1;
        }
    }

    return s;
}