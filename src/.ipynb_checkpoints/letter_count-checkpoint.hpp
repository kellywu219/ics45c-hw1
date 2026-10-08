#include <cctype>
#include <string>
#include <iostream>
constexpr int N_CHARS=26;

int char_to_index(char n){
    return n - 'A';
}
char index_to_char(int i){
    return i + 'A';
}
void count(std::string s, int counts[]){
    for(char c: s) {
        if(std::isalpha(static_cast<unsigned char>(c))){
            c = std::toupper(static_cast<unsigned char>(c));
            counts[char_to_index(c)]++;
        } 
    }
}
void print_counts(int counts[], int len) {
    for(int i = 0; i<len; i++){
        std::cout<< index_to_char(i) << " " << counts[i] << std::endl;
    }
}
