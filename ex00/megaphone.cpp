#include <iostream>

int	main(int argc, char **argv){
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1;argv[i] && argv[0];i++)
	{
		for (int j = 0;argv[i][j];j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				char a = argv[i][j] - 32;
				std::cout << a;
			}
			else{std::cout << argv[i][j];}
		}
	}
}
