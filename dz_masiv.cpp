#include <iostream>
#include <string>

int main()
{
	const int arraySize{ 10 };
	int arrayNumber[arraySize];

	for (int i{}; i < arraySize; i++)
	{
		std::cout << "Enter" << i + 1 << " number of array :";
		std::cin >> *(arrayNumber + i);
	}

	for (int i{}; i < arraySize; i++)
	{
		for (int j{ i + 1 }; j < arraySize; j++)
		{
			if (*(arrayNumber + j) < *(arrayNumber + i))
			{
				std::swap(*(arrayNumber + i), *(arrayNumber + j));
			}
		}
	}


	std::cout << "Sorted array: ";
	for (int i{}; i < arraySize; i++)
	{
		std::cout << *(arrayNumber + i) << " ";
	}
	return 0;
}
  