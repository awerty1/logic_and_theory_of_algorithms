#include <iostream>
#include <vector>

std::string buildCNF(std::vector<int>& truthTable) 
{
    std::string cnf;

    for (int i = 0; i < 8; ++i) 
	{
        if (truthTable[i] == 0) 
		{
            int x = i / 4;
            int y = (i % 4) / 2;
            int z = i % 2;

            if (!cnf.empty()) 
			{
                cnf += " * ";
            }
            
             cnf += "(";

            if (x == 0) 
			{
                cnf += "x";
            } 
			else 
			{
                cnf += "!x";
            }

            if (y == 0) 
			{
                cnf += " + y";
            } 
			else 
			{
                cnf += " + !y";
            }

            if (z == 0) 
			{
                cnf += " + z";
            } 
			else 
			{
                cnf += " + !z";
            }
            
             cnf += ")";
        }
    }

    return cnf;
}

int main() 
{
    std::vector<int> truthTable(8);
    for (int i = 0; i < 8; ++i) 
    {
        std::cin >> truthTable[i];
    }

    std::string cnf = buildCNF(truthTable);
    std::cout << cnf << std::endl;

    return 0;
}