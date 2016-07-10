ifstream fd(CDfv);
ofstream fr(CRfv);
string eil;
while (!fd.eof())
{
	getline(fd, eil);
	...// eilutės analizė ir rezultatų kaupimas 
	fr << eil << endl;
}
fd.close();
fr.close();