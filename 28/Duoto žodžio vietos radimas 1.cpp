// Faile fv randa duoto žodžio zod eil. nr. enr ir indeksą eilutėje pr
// skyr – galimų skyriklių rinkinys
void RastiŽodįFaile(string fv, string zod, string skyr, int & enr, int & pr) 
{
	ifstream fd(fv); string eil;
	enr = -1; pr = -1; int n = 0;  
	while (fd.good()) 
	{
		getline(fd, eil); n++;
		pr = ŽodžioPradžiaEil(eil, zod, skyr);
		if (pr > -1)
		{
			enr = n; fd.close();
			return;
		}
	}
	fd.close();
}