/*
L={w#wr | w é uma palavra do alfabeto {a,b} e wr é o reverso de w}.
*/

#include <iostream>
#include <string>

int main(){
    std::string word ("a#a");
    int head = 0;
    int tail = word.length() - 1;

    while(head < tail){
        if (word[head] != word[tail]) goto not_accepted;  
        head++; tail--;
    }

    if((head == tail) && word[head] != '#') goto not_accepted;


    std::cout << word << " corresponds to w#wr\n" ;return 0;
    not_accepted: std::cout << word << " does not correspond to w#wr\n" ;return 0;
}