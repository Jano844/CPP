
#include <fstream>
#include <iostream>

void	replace(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2, long s1_len)
{
	std::string line;
	while (std::getline(infile, line)) {
		// (long)line.find(s1) long damit -1 zurückgegeben if not found, da der datentyp unsinged long ist
		long pos = (long)line.find(s1);
		if (pos != -1) {
			line.erase(pos, s1_len);
			line.insert(pos, s2);
			// write to file
			outfile << line << std::endl;
		}
		else // write to file
			outfile << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	long	s1_len = s1.length();
	
	std::ifstream infile(argv[1]);
	std::ofstream outfile((std::string)argv[1] + ".replace");
	if (!infile || !outfile) {
		std::cerr << "Unable to open file";
		return (1);
	}
	replace(infile, outfile, s1, s2, s1_len);
	infile.close();
	outfile.close();
	return (0);
}