#include <iostream>
#include <cassert>
#include <string>

std::string does_meet(int pos1, int speed1, int pos2, int speed2)
{
	std::string no = "NO";
	std::string yes = "YES";
	int difference = abs(pos1 - pos2);

	if (difference == 0 && speed1 != speed2)
	{
		pos1 = pos1 + speed1;
		pos2 = pos2 + speed2;
		difference = abs(pos1 - pos2);
	}
	else if (difference == 0 && speed1 == speed2)
	{
		return yes;
	}

	if ((pos1 > pos2 && speed1 > speed2) || (pos2 > pos1 && speed2 > speed1))
	{
		return no; 
	}
	else
	{
		for (int i = 0; i < difference; ++i)
		{
			pos1 = pos1 + speed1;
			pos2 = pos2 + speed2;
			if (pos1 == pos2)
			{
				return yes;
			}
		}
		if (pos1 != pos2)
		{
			return no;
		}
	}
	return no;
}

int main()
{
	int x1, x2, v1, v2;
	std::cin >> x1 >> v1 >> x2 >> v2;

	std::string result = does_meet(x1, v1, x2, v2);
	std::cout << result << "\n";
}
