#include "no.h" 
#include <stdlib.h> 
#include <time.h> 
#include <stdio.h> 

const int ESQUERDA = -1; const int DIREITA = 1; const int ARVORE_VAZIA = -1; const int LIMITE_PADRAO = 100; 
class Arvore
{

public:
	Arvore();//construtor 
	~Arvore();//destrutor 
	No* raiz;

	bool eVazia();
	/* verifica se a �rvore � uma �rvore vazia
	 */

	void insere(int elem);
	/* Insere um elemento na �rvore, se ele nao existir,
	* de acordo com o seguinte algoritmo:
*	come�ando pela preferencia de inserir � esquerda, procura
*	o n� nulo com n�vel mais baixo poss�vel para inserir o
* novo n�. Ao inserir, a preferencia � invertida para a pr�xima
* inser��o.
	 */

	void remove(int elem);
	/* Remove  da �rvore o n� com o valor dado por "elem",
*	se ele existir
	 */

	void imprimeCentral();
	/* Imprime os n�s da �rvore que � varrida de forma central:
*	esquerda - raiz - direita
	 */

	bool existe(int elem);
	/* Verifica se o n� de valor "elem" existe na �rvore
	 */

	void geraArvore(int nElementos, int limite = LIMITE_PADRAO);
	/* Gera uma �rvore com nElementos  aleat�rios cujo valor vai de 0 at� limite.
*	A inser��o de cada elemento gerado � feita tamb�m de forma aletat�ria.
* A prefer�ncia de inser��o � esquerda ou � direita pode ser
*	invertida ou n�o a cada n�vel descido na busca de um n� vazio.
	 */

private:
	No* procura(int elem);
	/* Procura pelo n� de valor "elem", retornando um ponteiro para
	* este n�. Retorna NULL caso esse n� n�o exista.
	 */

	No* procuraPai(No* umNo);
	/* Procura o pai de "umNo" dentro da �rvore. Se umNo n�o
	* existir, ou for a raiz da �rvore, retorna NULL.
	 */
};

class ArvoreDeBusca :public Arvore
{
public:

	void insere(int elem);
	/*  m�todo  insere  para  inserir  os  elementos  da  seguinte  forma:
	todos  os elementos na sub�rvore � esquerda de qualquer elemento t�m que
	ser menores que ele e todos os elementos na sub�rvore da direita t�m que
	ser maiores do que ele.
	*/

	void ProcuraMenor();
	/*retorna um ponteiro para o n� de menor valor dentro da �rvore bin�ria de busca.*/

	void ProcuraMaior();
	/*m�todo que retorna um ponteiro para o n� de menor valor dentro da �rvore bin�ria de busca.*/

	void geraArvore(int nElementos, int limite = LIMITE_PADRAO);
	/* gerar  �rvores  ordenadas  de  acordo  com  o m�todo insereacima.*/
};
