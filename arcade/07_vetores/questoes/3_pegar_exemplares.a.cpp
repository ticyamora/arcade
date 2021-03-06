/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//@begin

//O dono do zoologico quer a lista de todas as especies de animais
//que existem no zoologico. Para isso ele te deu uma lista de todos
//os animais. Ele quer que você faça um programa que retorne uma
//nova lista contendo apenas um animal de cada especie.
//Considere que um número representa uma especie.
//Devolva um novo vetor, sem números repetidos e ordenado.
//Voce pode usar o sort da std para ordenar.

vector<int> pegar_exemplares(vector<int> vet){
    return vector<int>();
}

//@end

void tests ()
{
    cerr << "#open pegar_exemplares OURO IF FOR ";
    vector<int> in, out;
    cerr << (pegar_exemplares({1, 1}) == vector<int>({1}));
    cerr << (pegar_exemplares({1, 0, 1}) == vector<int>({0, 1}));
    cerr << (pegar_exemplares({1, 1, 2, 0}) == vector<int>({0, 1, 2}));
    in = {1, 3, 1, 2, 5, 7, 2};
    out = {1, 2, 3, 5, 7};
    cerr << (pegar_exemplares(in) == out);
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}