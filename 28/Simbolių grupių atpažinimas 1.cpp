// Faile fv randa duotos grupės gr eilutės nr enr ir pradžią pr eilutėje
void RastiGrupęFaile(string fv, string gr, int & enr, int & pr)  
{
	ifstream fd(fv);  string eil;
	enr = -1; pr = -1;  int n = 0;  
	while (fd.good()) 
	{
		getline(fd, eil);  n++; 
		pr = GrPradžiaEil(eil, gr);
		if (pr > -1)
		{
			enr = n;  fd.close();
			return;
		}
	}
	fd.close();
}