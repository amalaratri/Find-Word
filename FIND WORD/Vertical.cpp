bool vertical(const char* word, char matrix[][24], int wordLen) {
    for (int i = 0; i <= 24 - wordLen; i++) {
        for (int j = 0; j < 24; j++) {
            bool found = true;
            for (int k = 0; k < wordLen; k++) {
                if (matrix[i + k][j] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) return true;
        }
    }
    return false;
}

