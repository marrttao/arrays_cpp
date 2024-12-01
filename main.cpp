#include <iostream>
#include <conio.h>
#include <random>

using namespace std;

int array_max(int* array, int size)
{
	int max = array[0];
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] >= max)
		{
			max = array[i];
			index = i;
		}
	}

	return index;
}

int array_min(int* array, int size)
{
	int min = array[0];
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] <= min)
		{
			min = array[i];
			index = i;
		}
	}

	return index;
}

pair<unsigned int, int> _negative_numbers_finder(int* array, int size)
{
	unsigned int number = array[0];
	int first_index = -1;
	int last_index = -1;

	for (int i = 0; i <= size; i++)
	{
		if (array[i] < 0)
		{
			if (first_index < 0)
			{
				first_index = i;

				continue;
			}

			last_index = i;
		}
	}

	return { first_index, last_index };
}

int main()
{
	const unsigned int size = 10;
	int array[size];
	int value;
	int sum_of_negative_numbers = 0;
	int product_min_btw_max = 1;
	int product_even_indexes = 1;
	int sum_first_btw_last_negative = 0;

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(-10, 10);

	cout << "Array: ";

	for (int i = 0; i <= size; i++)
	{
		value = dist(rd);

		if (value == 0)
		{
			continue;
		}

		array[i] = value;

		cout << array[i] << " ";

		if (array[i] < 0)
		{
			sum_of_negative_numbers += array[i];
		}
	}

	int min_number_index = array_min(array, size);
	int max_number_index = array_max(array, size);

	if (max_number_index < min_number_index)
	{
		int temp = max_number_index;
		max_number_index = min_number_index;
		min_number_index = temp;
	}

	for (int i = min_number_index + 1; i < max_number_index; i++)
	{
		product_min_btw_max *= array[i];
	}

	for (int i = 0; i <= size; i += 2)
	{
		product_even_indexes *= array[i];
	}

	pair<unsigned int, int> negative_numbers_indexes = _negative_numbers_finder(array, size);

	for (int i = negative_numbers_indexes.first + 1; i < negative_numbers_indexes.second; i++)
	{
		sum_first_btw_last_negative += array[i];
	}


	cout << "The sum of negative numbers: " << sum_of_negative_numbers << endl;
	cout << "Product of elements that are between min and max elements: " << product_min_btw_max << endl;
	cout << "Product of elements with even numbers: " << product_even_indexes << endl;
	cout << "Sum of the elements between the first and last negative elements: " << sum_first_btw_last_negative << endl;
	return 0;
}
