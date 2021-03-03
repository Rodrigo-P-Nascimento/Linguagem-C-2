#include <iostream>

using namespace std;

int main(){

    /*========================> CLASSE STRING <===========================

    ---------------------------- Iteradores ------------------------------

    begin > Retorne o iterador para o in�cio (fun��o de membro p�blico)
    end > Retorne o iterador para o final (fun��o de membro p�blico)
    rbegin > Retorne o iterador reverso para o in�cio reverso (fun��o de membro p�blico)
    rend > Retorne o iterador reverso para a extremidade reversa (fun��o de membro p�blico)
    cbegin > Retorne const_iterator para o in�cio (fun��o de membro p�blico)
    cend  > Retorne const_iterator para o final (fun��o de membro p�blico)
    crbegin  > Retorne const_reverse_iterator para inverter o in�cio (fun��o de membro p�blico)
    crend  > Retorne const_reverse_iterator para reverso (fun��o de membro p�blico)

    ---------------------------- Capacidade ------------------------------

    size > Retorne o comprimento da string (fun��o de membro p�blico)
    length > Retorne o comprimento da string (fun��o de membro p�blico)
    max_size > Retorna o tamanho m�ximo da string (fun��o de membro p�blico)
    resize > Redimensionar string (fun��o de membro p�blico)
    capacity > Retorne o tamanho do armazenamento alocado (fun��o de membro p�blico)
    reserve > Solicite uma mudan�a de capacidade (fun��o de membro p�blico)
    clear > Limpar string (fun��o de membro p�blico)
    empty > Teste se a string est� vazia (fun��o de membro p�blico)
    shrink_to_fit > Reduzir para caber (fun��o de membro p�blico)

    ---------------------------- Acesso ao elemento ------------------------------

    operador[] > Obter caractere de string (fun��o de membro p�blico)
    at > Obtenha o caractere na string (fun��o de membro p�blico)
    back  > Acessar o �ltimo caractere (fun��o de membro p�blico)
    front  > Acesse o primeiro caractere (fun��o de membro p�blico)

    ---------------------------- Modificadores ------------------------------

    operador+= > Anexar � string (fun��o de membro p�blico)
    append > Anexar � string (fun��o de membro p�blico)
    push_back > Anexar caractere � string (fun��o de membro p�blico)
    assign > Atribuir conte�do a string (fun��o de membro p�blico)
    insert > Inserir na string (fun��o de membro p�blico)
    erase > Apagar caracteres da string (fun��o de membro p�blico)
    replace > Substitua parte da string (fun��o de membro p�blico)
    swap > Valores de string de troca (fun��o de membro p�blico)
    pop_back  > Excluir o �ltimo caractere (fun��o de membro p�blico)

    ---------------------------- Opera��es de string ------------------------------

    c_str > Obter string C equivalente (fun��o de membro p�blico)
    data > Obter dados de string (fun��o de membro p�blico)
    get_allocator > Obter alocador (fun��o de membro p�blico)
    copy > Copie a sequ�ncia de caracteres da string (fun��o de membro p�blico)
    find > Encontre conte�do em string (fun��o de membro p�blico)
    rfind > Encontre a �ltima ocorr�ncia de conte�do na string (fun��o de membro p�blico)
    find_first_of > Encontre o caractere na string (fun��o de membro p�blico)
    find_last_of > Encontre o caractere na string a partir do final (fun��o de membro p�blico)
    find_first_not_of > Encontre a aus�ncia de caractere na string (fun��o de membro p�blico)
    find_last_not_of > Encontre o caractere n�o correspondente na string a partir do final (fun��o de membro p�blico)
    substr > Gerar substring (fun��o de membro p�blico)
    compare > Compare strings (fun��o de membro p�blico)

    ====================================================================
    ========================> FUN��ES <=================================

    stoi > Converter string em inteiro (modelo de fun��o)
    stol > Converte string em int longo (modelo de fun��o)
    stoul > Converter string em inteiro sem sinal (modelo de fun��o)
    stoll > Converter string em longa longa (modelo de fun��o)
    stoull > Converter string em long long sem sinal (modelo de fun��o)
    stof  > Converter string em float (modelo de fun��o)
    stod > Converter string em duplo (modelo de fun��o)
    stold > Converte string em duplo longo (modelo de fun��o)


    return 0;
}
