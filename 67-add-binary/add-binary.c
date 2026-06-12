char* addBinary(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = (lenA > lenB ? lenA : lenB) + 1; // +1 for possible carry
    char* result = (char*)malloc(maxLen + 1);     // +1 for null terminator
    result[maxLen] = '\0';

    int i = lenA - 1, j = lenB - 1, k = maxLen - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    // If k >= 0, shift result to remove leading unused space
    return result + k + 1;
    
}