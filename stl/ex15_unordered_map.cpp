// 표준 입력을 받아서 (영어 문장) - this is a apple.
// 단어 별 등장 횟수를 출력하는 프로그램.

#include <iostream>
#include <sstream> // string으로 들어온 것을 string으로 받는 
#include <unordered_map>
#include <algorithm>
#include <cctype>

using namespace std;
string clean_word(const string& word){
    string cleaned;
    for (char ch : word){
        if(isalpha(ch) || isdigit(ch)){
            cleaned += tolower(ch);
        }
    }
    return cleaned;
};

int main()
{
    string line;
    getline(cin , line);

    unordered_map<string , int> word_count;
    istringstream iss(line);
    string word;

    while(iss >> word){
        string cleaned = clean_word(word); // 소문자로 바뀌고 알파벳이 아닌 다른 특수문자들은 빠짐
        if(!cleaned.empty()){
            word_count[cleaned]++; //word_count[key] = value;
        }
    }
    for (const auto & [key , value] : word_count){
        cout << key << " : " << value << endl;
    }
    
    return 0;
}
