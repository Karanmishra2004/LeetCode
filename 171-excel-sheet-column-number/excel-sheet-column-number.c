int titleToNumber(char* columnTitle) {
    int i = 0;
     int result = 0 ;
    while(columnTitle[i] != '\0')
    {
        result = result * 26 +  (columnTitle[i] - 'A' + 1);
        i++;
    }
    return  result;
    
}