#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string str1 = "zohaib";
    string str2 = "haibzo";
    if(str1.length()!=str2.length()) {
        cout << "Not anagrams" <<endl;
        return -1;
    }
    unordered_map<char,int> char_freq1, char_freq2;
    for(int i=0;i<str1.length();i++) {
        char_freq1[str1[i]]++;
        char_freq2[str2[i]]++;
    }
    if(char_freq1==char_freq2) {
        cout << "The words are anagrams" <<endl;
    } else {
        cout << "The words are not anagrams" << endl;
    }
}