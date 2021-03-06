/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça um código que receba 3 valores e retorne se eles possuem alguma
//ordenação.
//@return: Retorna uma enum.

enum Ordenacao {Crescente, Decrescente, SemOrdem};

Ordenacao ver_ordem(int A, int B, int C){
    return Crescente;
}

//@end

void tests(){
    cerr << "#open ver_ordem BRONZE IF ENUM" << endl;
    cerr << (ver_ordem(1, 3, 5) == Crescente);
    cerr << (ver_ordem(1, 3, 2) == SemOrdem);
    cerr << (ver_ordem(4, 3, 2) == Decrescente);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//Essa questão não possui dicas.
