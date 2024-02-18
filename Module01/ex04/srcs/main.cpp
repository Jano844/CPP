
#include <iostream>
#include <fstream>
#include <cstdlib>


/*
before eval:

chmod 000 no_permissions
chmod 400 only_read
chmod 300 only_write_exe
*/

bool error_handler(std::string in, std::string out)
{
	std::ifstream in_file(in.c_str());
	std::ifstream out_file(out.c_str());

	// check if infile exists and has read permissions
	if (!in_file.good()) {
		std::cerr << "File does not exist or has no read permissions.\n";
		return (1);
	}
	// check if outfile exists
	if (out_file.good()) {
		std::cout << "File already exists.\n" << "Use an other name or delete the " << out << ".replacefile.\n";
		return (1);
	}
	return (0);
}

void	replace(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2, long s1_len)
{
	std::string line;
	int	counter = 0;
	while (std::getline(infile, line)) {
		// (long)line.find(s1) long damit -1 zurückgegeben if not found, da der datentyp unsinged long ist
		long pos = (long)line.find(s1);
		if (pos != -1) {
			counter = 1;
			line.erase(pos, s1_len);
			line.insert(pos, s2);
			// write to file
			outfile << line << std::endl;
		}
		else // write to file
			outfile << line << std::endl;
	}
	if (counter == 0)
		std::cout	<< "String not found, created anyway to remove: make fclean" << std::endl
					<< "Attension fclean or clean removes all .remove files !!!!" << std::endl;
	else
		std::cout << "String replaced" << std::endl;
}

// from subject: Create a program that takes three parameters in the following order: a filename and two strings, s1 and s2.
// s1 to be replaced by s2
int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string old_file(argv[1]);
	std::string new_file = old_file + ".replace";
	if (error_handler(old_file, new_file))
		return (1);

	std::string s1(argv[2]);
	std::string s2(argv[3]);

	long	s1_len = s1.length();
	
	std::ifstream infile(argv[1]);
	std::ofstream outfile(new_file.c_str());
	// ofstream constructer expects a "const char*" thats why .c_str without -> error only on linux, Mac sucks lol :)
	if (!infile || !outfile) {
		std::cerr << "Unable to open file";
		return (1);
	}
	replace(infile, outfile, s1, s2, s1_len);
	infile.close();
	outfile.close();
	return (0);
}