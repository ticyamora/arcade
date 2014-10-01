
Vector

Um vector é uma estrutura de dados utilizada para guardar objetos
em C++. Para utilizá-lo em seu código é necessário o include:

    #include <vector>

Para criar um vector você precisa sempre dizer o tipo do vetor
que está sendo criado entre <> após a palavra vector. Um vetor
de inteiros chamado numeros e um vetor de string chamado nomes
pode ser criado da seguinte forma.

    vector<int> numeros;
    vector<string> nomes;

Esse tipo de inicialização cria um vetor vazio. É possível já
criar um vetor atribuindo elementos a ele através dos {}. Vamos
criar dois vetor de floats com alguns elementos.

    vector<float> notas = {5.5, 4.5, 9.0, 0.5};
    vector<float> peso  = {98.0, 95.9, 88.0};

Observe que não é possível fazer essa atribuição, depois de criado,
apenas é possível durante a criação. O seguinte código dá erro.

    vector<float> alturas;
    alturas = {88.0, 99.7}; //erro

Para acessar um elemento do vetor, utiliza-se o [] e um número.
O primeiro elemento tem o índice 0.

    vector<string> amigos = {"Marcos", "Flavio", "Almeida"};
    cout << amigos[0]; //imprime Marcos
    cout << amigos[2]; //imprime Almeida
    cout << amigos[3]; //erro, não existe esse elemento

Se eu quiser adicinar um novo elemento ao vetor, eu posso
através do metodo push_back, que significa inserir no fim.
Vou adicionar um novo amigo ao vetor que criamos acima.

    amigos.push_back("Sergio");
    cout << amigos[3]; //agora mostraria o Sergio.

É possível visualizar a quantidade de elemento do vetor
com o método size.

    cout << amigos.size(); //imprime 4

É possível iterar sobre os elementos do vetor de várias
formas. A mais fácil delas é essa:

    for ( string nome : amigos ){
        cout << nome << " ";
    }

Nesse caso, a variável nome, que precisa ser do mesmo tipo
das variáveis do vetor, assume o valor de cada elemento do vetor.
E você pode imprimir todos os valores que existem no vetor.
Caso você queira modificar os elementos do vetor, é necessário
usar o operador de referência.

    for ( string & nome : amigos ){
        nome += " Silva";
    }

No caso acima, adicionei o sobrenome Silva em todos os meus amigos.
Também é possível usar o for e acessar os elemetos pelo índice.
Apenas uma coisa deve ser observada. Se você for usar o método
size() dentro do for, será necessário um cast para int.

    for (int i = 0; i < (int) amigos.size(); i++){
        cout << amigos[i] << " ";
    }

Existem outras formas de se criar um vetor, a primeira
é criar a partir de outro vetor já existente.

    vector<int> notas = {1, 3, 5};
    vector<int> notas2 (notas);

É possível criar um vetor já preenchido com vários elementos.
Vamos criar um vetor já inicializado com 6 strings "batata";

    vector<string> plantacao (6, "batata");

Para operações de remoção você vai precisar dos métodos
erase e begin. O método erase é para apagar, mas ele precisa
de um "iterador" que aponta para o objeto a ser apagado. O
método begin() retorna um "iterador" para o primeiro elemento.

    vector<char> vogais = {'a', 'e', 'i', 'o', 'u', 'x'};
    nome.erase(nome.begin()); //apaga o 'a'
    nome.erase(nome.begin()); //apaga o 'e'
    nome.erase(nome.begin() + 3); //apaga o 'x'

Em um vector é muito dispendioso a operação de apagar no meio
do vetor. Se isso for algo constante no seu código, você deve
usar a estrutura list que tem todos os mesmos comandos que
descrevemos aqui, mas é mais rápida para apagar. Porém, mais
lenta para acessar elementos aleatoriamente.

Vector, list, deques, se comportam de forma muito parecida.
Todos são containers do C++. Por default, trazem a possibilidade
de comparação para tipos primitivos.

    list<int> idades1 = {1, 2, 3, 4};
    list<int> idades2 = {1, 2, 3, 4};

    cout << (idades1 == idades2); //ok, retorna true

Atençaõ que list não possui []. Você não pode fazer
    idades1[3] = 4;
porque uma lista não é uma estrutura de acesso aleatório.
Mas você ainda pode fazer:

for(int elem : idades1)
    cout << elem;

Existe uma outra forma de inicializar containers, que é colocando
os {} dentro de parenteses como numa chamada de função.

    list<int> lint ({1, 2, 3, 4, 5});

Essa forma de criação no permite gerar objetos sem nome que são
úteis em alguns contextos. Por exemplo para comparação.

    list<int> seq = {1, 2, 3, 4, 5};
    cout << (seq == list<int>({1, 2, 3, 4, 5})); //retorna true

Para apagar uma lista ou vector basta usar o método clear.
Ela zera o tamanho do container.

    seq.clear();
