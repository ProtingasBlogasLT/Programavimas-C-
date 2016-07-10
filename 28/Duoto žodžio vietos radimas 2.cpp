// Grąžina žodžio zod pirmojo simbolio eilutėje eil indeksą, jei eilutėje eil 
// tokio žodžio nėra, grąžina (-1); skyr - skyriklių rinkinys
int ŽodžioPradžiaEil(string eil, string zod, string skyr) 
{
	int nr, k1, k2;
	string eil1 = " " + eil + " ";
	for(int i = 0; i < eil1.length(); i= nr+zod.length())
	{
		nr = eil1.find(zod, i);
		if (nr == -1)
			return nr;
		k1 = skyr.find(eil1[nr-1]);
		k2 = skyr.find(eil1[nr+zod.length()]);
		if (k1 > -1 && k2 > -1)
			return nr-1;  
	}
	return -1;
}