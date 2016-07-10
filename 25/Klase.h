#pragma once

class Klase
{
private:
	int kint,
		kint2;
public:
	int ImtiKint() { return kint; }
	int ImtiKint2() { return kint2; }
	void DėtiDuom(int a, int b) { kint = a; kint2 = b; }
};