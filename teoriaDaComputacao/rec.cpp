/*
L={w#wr | w é uma palavra do alfabeto {a,b} e wr é o reverso de w}.
*/

#include <iostream>
#include <string>

int recursive_test(int head, int tail, std::string word);

int main(){
    std::string word ("aia");
    int head = 0;
    int tail = word.length() - 1;

    if(recursive_test(head, tail, word)){
        std::cout << word <<" is w#wr\n";
    } else {
        std::cout << word <<" is not w#wr\n";
    }
    return 0;
}

int recursive_test(int head, int tail, std::string word){
    if(word[head] != word[tail]){
        return 0;
    }

    if(head > tail) return 1;
    if((head == tail) && (word[head] == '#')){
        return 1;
    } else {
        return 0;
    }
        
    return 1 && recursive_test(head + 1, tail - 1, word);
}