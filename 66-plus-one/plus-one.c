/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

    int *arr = (int*)malloc(digitsSize*sizeof(int));

    for (int i = 0; i < digitsSize; i++) {
        arr[i] = digits[i];
    }
for (int i = digitsSize - 1; i >= 0; i--) {
        if (arr[i] < 9) {
            arr[i]++;
            *returnSize = digitsSize;
            return arr;
        }

        arr[i] = 0;
    }

    free(arr);

    arr = (int*)malloc((digitsSize + 1) * sizeof(int));
    arr[0] = 1;

    for (int i = 1; i <= digitsSize; i++) {
        arr[i] = 0;
    }

    *returnSize = digitsSize + 1;
    return arr;
    
}