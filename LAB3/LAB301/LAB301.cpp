

#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter a : ";
	while (!(std::cin >> a))
	{
	}
	std::cout << "Enter b : ";
	while (!(std::cin >> b))
	{
	}
	printf("A + B = %d\n", a + b);
	printf("A - B = %d\n", a - b);
	printf("A * B = %d\n", a * b);
	printf("A / B = %d\n", a / b); 
	printf("A %% B = %d\n", a % b);
	
	return 0;
}

