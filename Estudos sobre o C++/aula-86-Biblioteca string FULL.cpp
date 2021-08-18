#include <iostream>

using namespace std;

int main(){

    /*========================> CLASSE STRING <===========================

    ---------------------------- Iteradores ------------------------------

    begin > Retorne o iterador para o início (função de membro público)
    end > Retorne o iterador para o final (função de membro público)
    rbegin > Retorne o iterador reverso para o início reverso (função de membro público)
    rend > Retorne o iterador reverso para a extremidade reversa (função de membro público)
    cbegin > Retorne const_iterator para o início (função de membro público)
    cend  > Retorne const_iterator para o final (função de membro público)
    crbegin  > Retorne const_reverse_iterator para inverter o início (função de membro público)
    crend  > Retorne const_reverse_iterator para reverso (função de membro público)

    ---------------------------- Capacidade ------------------------------

    size > Retorne o comprimento da string (função de membro público)
    length > Retorne o comprimento da string (função de membro público)
    max_size > Retorna o tamanho máximo da string (função de membro público)
    resize > Redimensionar string (função de membro público)
    capacity > Retorne o tamanho do armazenamento alocado (função de membro público)
    reserve > Solicite uma mudança de capacidade (função de membro público)
    clear > Limpar string (função de membro público)
    empty > Teste se a string está vazia (função de membro público)
    shrink_to_fit > Reduzir para caber (função de membro público)

    ---------------------------- Acesso ao elemento ------------------------------

    operador[] > Obter caractere de string (função de membro público)
    at > Obtenha o caractere na string (função de membro público)
    back  > Acessar o último caractere (função de membro público)
    front  > Acesse o primeiro caractere (função de membro público)

    ---------------------------- Modificadores ------------------------------

    operador+= > Anexar à string (função de membro público)
    append > Anexar à string (função de membro público)
    push_back > Anexar caractere à string (função de membro público)
    assign > Atribuir conteúdo a string (função de membro público)
    insert > Inserir na string (função de membro público)
    erase > Apagar caracteres da string (função de membro público)
    replace > Substitua parte da string (função de membro público)
    swap > Valores de string de troca (função de membro público)
    pop_back  > Excluir o último caractere (função de membro público)

    ---------------------------- Operações de string ------------------------------

    c_str > Obter string C equivalente (função de membro público)
    data > Obter dados de string (função de membro público)
    get_allocator > Obter alocador (função de membro público)
    copy > Copie a sequência de caracteres da string (função de membro público)
    find > Encontre conteúdo em string (função de membro público)
    rfind > Encontre a última ocorrência de conteúdo na string (função de membro público)
    find_first_of > Encontre o caractere na string (função de membro público)
    find_last_of > Encontre o caractere na string a partir do final (função de membro público)
    find_first_not_of > Encontre a ausência de caractere na string (função de membro público)
    find_last_not_of > Encontre o caractere não correspondente na string a partir do final (função de membro público)
    substr > Gerar substring (função de membro público)
    compare > Compare strings (função de membro público)

    ====================================================================
    ========================> FUNÇÕES <=================================

    stoi > Converter string em inteiro (modelo de função)
    stol > Converte string em int longo (modelo de função)
    stoul > Converter string em inteiro sem sinal (modelo de função)
    stoll > Converter string em longa longa (modelo de função)
    stoull > Converter string em long long sem sinal (modelo de função)
    stof  > Converter string em float (modelo de função)
    stod > Converter string em duplo (modelo de função)
    stold > Converte string em duplo longo (modelo de função)


    return 0;
}
