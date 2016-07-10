// Grąžina eilutės e pirmojo simbolio indeksą eilutėje eil, 
// jei eilutėje eil eilutės e nėra, grąžina (-1)
int GrPradžiaEil(string eil, string e) 
{
	int nr = eil.find(e);
	return nr;
}