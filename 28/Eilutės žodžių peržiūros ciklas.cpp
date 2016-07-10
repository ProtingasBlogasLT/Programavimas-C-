string eil, string skyr; // eilutė, skyrikliai

// eil ir skyr turi būti suteiktos reikšmės
int zpr = -1;  ilg = 0; 
int zpb = 0;
eil = eil + " "; 
while ((zpr = eil.find_first_not_of(skyr, zpb)) != -1)
{
	zpb = eil.find_first_of(skyr, zpr);
	ilg = zpb - zpr;
	// galima kopijuoti žodį, taikant substr(pr, ilg)
}