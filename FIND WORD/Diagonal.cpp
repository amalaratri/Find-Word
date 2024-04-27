bool diagonal(const char* word, char matrix[][24], int wordLen) {
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 24; ++j) {
            bool found = true;
            // Untuk mengecek diagonal kanan bawah
            if (i <= 24 - wordLen && j <= 24 - wordLen) {
                for (int k = 0; k < wordLen; k++) {
                    if (matrix[i + k][j + k] != word[k]) {
                        found = false;
                        break;
                    }
                }
                if (found) return true;
            }
            // Mengcek diagonal kiri bawah
            found = true;
            if (i <= 24 - wordLen && j >= wordLen - 1) {
                for (int k = 0; k < wordLen; k++) {
                    if (matrix[i + k][j - k] != word[k]) {
                        found = false;
                        break;
                    }
                }
                if (found) return true;
            }
        }
    }
    return false;
}

