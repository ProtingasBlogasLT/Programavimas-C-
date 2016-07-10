#include "Komanda.h"

void Komanda::Rikiuoti()
{
	for (int i = 0; i < kiek; i++)
	{
		Žaidėjas z = visi[i];
		int im = i;
		for (int j = i + 1; j < kiek; j++)
		{
			if (visi[j] < z)
			{
				z = visi[j];
				im = j;
			}
		}
		visi[im] = visi[i];
		visi[i] = z;
	}
}