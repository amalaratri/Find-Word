#include <iostream>
#include <cstring>
using namespace std;

void toUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

bool horizontal(const char* word, char matrix[][24], int wordLen) {
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j <= 24 - wordLen; j++) {
            bool found = true;
            for (int k = 0; k < wordLen; k++) {
                if (matrix[j + k][i] != word[k]) {
                    found = false;
                    break;
                }
            }
            if (found) return true;
        }
    }
    return false;
}

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

bool diagonal(const char* word, char matrix[][24], int wordLen) {
    for (int i = 0; i < 24; i++) {
        for (int j = 0; j < 24; ++j) {
            bool found = true;
            
            if (i <= 24 - wordLen && j <= 24 - wordLen) {
                for (int k = 0; k < wordLen; k++) {
                    if (matrix[i + k][j + k] != word[k]) {
                        found = false;
                        break;
                    }
                }
                if (found) return true;
            }
            
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

bool searchWord(const char* word, char matrix[][24]) {
    int wordLen = strlen(word);
    return horizontal(word, matrix, wordLen) || vertical(word, matrix, wordLen) || diagonal(word, matrix, wordLen);
}
#include <iostream>
#include <cstring>
using namespace std;

void toUpperCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

bool horizontal(const char* word, char matrix[][24], int wordLen) {
    for (int i = 0; i < 24; ++i) {
        for (int j = 0; j <= 24 - wordLen; ++j) {
            bool found = true;
            for (int k = 0; k < wordLen; ++k) {
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

bool vertical(const char* word, char matrix[][24], int wordLen) {
    for (int i = 0; i <= 24 - wordLen; ++i) {
        for (int j = 0; j < 24; ++j) {
            bool found = true;
            for (int k = 0; k < wordLen; ++k) {
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

bool diagonal(const char* word, char matrix[][24], int wordLen) {
    for (int i = 0; i < 24; ++i) {
        for (int j = 0; j < 24; ++j) {
            bool found = true;
            
            if (i <= 24 - wordLen && j <= 24 - wordLen) {
                for (int k = 0; k < wordLen; ++k) {
                    if (matrix[i + k][j + k] != word[k]) {
                        found = false;
                        break;
                    }
                }
                if (found) return true;
            }
            
            found = true;
            if (i <= 24 - wordLen && j >= wordLen - 1) {
                for (int k = 0; k < wordLen; ++k) {
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


bool searchWord(const char* word, char matrix[][24]) {
    int wordLen = strlen(word);
    return horizontal(word, matrix, wordLen) || vertical(word, matrix, wordLen) || diagonal(word, matrix, wordLen);
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); 

    char words[N][24]; 

    
    for (int i = 0; i < N; ++i) {
        cin.getline(words[i], 24);
        toUpperCase(words[i]);
    }




  
