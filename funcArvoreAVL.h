typedef struct info Info;

typedef struct arvore Arvore;

Arvore* criaArvore ( );

void adicionaArvore ( Arvore** arvore, int id );

Arvore** maiorDosMenores ( Arvore** arvore );

Arvore** menorDosMaiores ( Arvore** arvore );

void removeArvore ( Arvore** arvore, int id );

void imprimeArvore ( Arvore* arvore );

void limpaArvore ( Arvore** arvore );

int altura (Arvore* arvore);

int fb (Arvore* arvore);

void rotacaoEsquerda (Arvore** arvore);

void rotacaoDireita (Arvore** arvore);

void verificaFb (Arvore** arvore);

void jump ( int n );

void getchPress ( );
