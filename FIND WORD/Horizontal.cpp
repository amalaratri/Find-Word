bool horizontal(const char* word, char matrix[][24], int wordLen) {
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j <= 24 - wordLen; j++) {
            bool found = true;
            for (int k = 0; k < wordLen; k++) {
                if (matrix[i][j + k] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) return true;
        }
    }
    return false;
}
