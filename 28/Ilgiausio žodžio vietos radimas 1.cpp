void RastiIlgŽodįFaile(string fv, string skyr, int & enr, int & pr, int & ilg)
{
	ifstream fd(fv);  string eil;
	enr = pr = -1; ilg = 0;
	int n = 0;  int pre;  int ilge;
	while (fd.good())
	{
		getline(fd, eil); n++;
		RastiIlgŽodįEil(eil, skyr, pre, ilge);
		if (ilge > ilg)
		{ 
			enr = n;
			pr = pre;
			ilg = ilge;
		}
	}
	fd.close();
}