/*
L={w#wr | w é uma palavra do alfabeto {a,b} e wr é o reverso de w}.
*/

#include <iostream>
#include <string>

int main(){
    std::string word ("aai#iaa");
    int head = 0;
    int tail = word.length() - 1;

    r1: if (word[head] != word [tail]) goto r6; 
    r2: head++; tail--;
    r3: if ((head == tail) || head>tail) goto r5;
    r4: goto r1;

    /*
    O programa aceita aabbaa. Eu poderia fazer uma segunda verificação para certificar a presença de "#" mas resolvi deixar sem
    para diminuir o código. Além disso, dessa forma o programa aceita outros operandos para fazer a separação ou até mesmo nenhum operando.
    */
    r5: std::cout << word <<" is w#wr\n"; goto end;  
    r6: std::cout << word <<" is not w#wr\n"; goto end;
    
    end: return 0;
}