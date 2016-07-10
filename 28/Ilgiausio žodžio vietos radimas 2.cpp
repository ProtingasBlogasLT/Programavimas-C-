void RastiIlgŽodįEil(string eil, string skyr, int & pr, int & ilg) 
{
	pr = -1;  ilg = 0; 
	int zpr, zpb = 0;
	eil = eil + " "; 
	while ((zpr = eil.find_first_not_of( skyr, zpb)) != -1)
	{
		zpb = eil.find_first_of(skyr, zpr);
		if (zpb - zpr > ilg)
		{
			pr = zpr;
			ilg = zpb - zpr;
		}
	}
}