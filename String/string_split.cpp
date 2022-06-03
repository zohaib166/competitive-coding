#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector <string> split_string(string str, char s) {
    vector<string> words;
    string word;
    char *sep = (char*) malloc(sizeof(char));
    *sep = s;
    int len = str.length();
    char ch_words[len+1];
    strcpy(ch_words, str.c_str());
    char *token = strtok(ch_words, sep);
    while (token != NULL)
    {
        word = token;
        words.push_back(word);
        token = strtok(NULL, sep);
    }
    return words;
}

int main()
{
    string str = "2021:12:04";

    vector <string> answer = split_string(str,':');
    for(int i=0;i<answer.size();i++) {
        cout << answer[i] << " ";
    }
    
}