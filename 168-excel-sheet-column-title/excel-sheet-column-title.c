char* convertToTitle(int columnNumber) {
char *arr = malloc(20); 
int i = 0;
while (columnNumber > 0 )
{
    columnNumber--;
    int rem = columnNumber % 26;
    arr[i++] = 'A' + rem;
    columnNumber /= 26;
}

arr[i] = '\0';

    for (int l = 0, r = i - 1; l < r; l++, r--) {
        char temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }
    return arr;
}