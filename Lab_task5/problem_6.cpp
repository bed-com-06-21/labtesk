#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }
    return count;
}

string reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalizeNext = false;
    for (char& c : result) {
        if (isspace(c)) {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            c = toupper(c);
            capitalizeNext = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("myText.txt");
    string fileData;
    if (inputFile.is_open()) {
        
        getline(inputFile, fileData);
        inputFile.close();
    } else {
        cout << "Unable to open file!" << endl;
        return 1;
    }

    // Calculate and output number of vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels in the text file statement: " << vowelCount << endl;

    // Calculate and output number of words
    int wordCount = countWords(fileData);
    cout << "Number of words in the text file statement: " << wordCount << endl;

    // Output statement in reverse
    string reversedStatement = reverse(fileData);
    cout << "Statement in reverse: " << reversedStatement << endl;

    // Output statement with second letter capitalized
    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Statement with second letter capitalized: " << capitalizedStatement << endl;

    return 0;
}
