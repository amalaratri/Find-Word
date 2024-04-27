bool searchWord(const char* word, char matrix[][24]) {
    int wordLen = strlen(word);
    return horizontal(word, matrix, wordLen) || vertical(word, matrix, wordLen) || diagonal(word, matrix, wordLen);
}
