#include <fstream>
#include <cstring>

int main(int argc, char* argv[])
{
	std::ifstream inf;
	inf.open("maps.txt");

	std::ofstream outf;
	outf.open("output.txt", std::ios::app);

	char szStr[64];
	while (inf >> szStr)
	{
		for (int i = 0; i < strlen(szStr); i++)
			szStr[i] = std::tolower(szStr[i]);

		outf << "https://fastdl-eu.cybershoke.net/maps/surf_" << szStr << ".bsp" << std::endl;
	}

	inf.close();
	outf.close();

	return 0;
}
