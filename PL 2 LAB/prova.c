

float saldo[QTD_CLIENTES];
int number, next;
int turn[QTD_TRHEADS];

void* manipula_saldo(void* p){
    "Teria uma struct dos dados = data"

	long idx = data.indice;
    float op = data.operacao;

    turn[idx] = atomic_fetch_add(&number); //Atibui um ticket a thread e incrementa o valor de forma atomica(P.E.)
    while(turn[idx] != next); //fazer o <await>

    //Seção critica
    saldo[idx] += op;

    atomic_fetch_add(&next); //pra garantir que o next seja atomico(P.S.)



}
