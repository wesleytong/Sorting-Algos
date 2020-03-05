//CIS 22C Spring 2018 - Lab 4
//Wesley Tong and Deepkiran Sangha
//Demonstration of insertion, merge, and quick sorts in descending order. 
#include <iostream>
#include <fstream>
#include <string>
#include "Array.h"
#include "Mergesort.h"
#include "Quicksort.h"
#include "Insertionsort.h"

using namespace std;

//output file, gets rewritten upon every execution. 
ofstream output("output.txt");

int main()
{
	int choice = 0;
	const int SORT_MAX_SIZE = 32;
	int size = SORT_MAX_SIZE + 1;
	
		while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice!=5)
		{
			cout << "Welcome to the sorting demonstration" << endl;
			output << "Welcome to the sorting demonstration" << endl;
			cout << "Which type of data would you like to sort?" << endl;
			output << "Which type of data would you like to sort?" << endl;
			cout << "1: Integers" << endl;
			output << "1: Integers" << endl;
			cout << "2: Doubles" << endl;
			output << "2: Doubles" << endl;
			cout << "3: Characters" << endl;
			output << "3: Characters" << endl;
			cout << "4: Strings" << endl;
			output << "4: Strings" << endl;
			cout << "5: Exit" << endl;
			output << "5: Exit" << endl;
			cin >> choice;
			output << choice;
			if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice !=5)
			{
				cout << "Invalid Choice" << endl;
				output << "Invalid Choice" << endl;
			}
		}
		while (choice !=5 && size > SORT_MAX_SIZE || size <= 0 )
		{
			cout << "Enter size of data, between 1 and 32. " << endl;
			output << "Enter size of data, between 1 and 32. " << endl;
			cin >> size;
			output << size;
			cin.clear();
			cin.ignore();
			cout << endl;
			output << endl;
			if (size > SORT_MAX_SIZE || size <= 0)
			{
				cout << "Invalid Size" << endl;
				output << "Invalid Size" << endl;
			}
		}

		if (choice == 1)
		{
			Array<int> a(size);
			int in;
			cout << "Enter data separated by a space. " << endl;
			output << "Enter data separated by a space. " << endl;
			for (int i = 0; i < size; i++)
			{
				cin >> in;
				output << in << " ";
				a[i] = in;
			}
			cin.clear();
			cin.ignore();
			cout << endl;
			output << endl << endl;

			Array<int> original(size);
			for (int i = 0; i < size; i++)
			{
				original[i] = a[i];
			}

			cout << "Insertion Sort: " << endl;
			output << "Insertion Sort: " << endl;
			for (int i = 0; i < a.sizeFn(); i++)
			{
				cout << a[i] << " ";
				output << endl;
			}

			cout << endl;
			output << endl << endl;

			insertionSort(a, size);

			cout << endl;
			output << endl;

			for (int i = 0; i < size; i++)
			{
				a[i] = original[i];
			}

			cout << "Quick Sort: " << endl;
			output << "Quick Sort: " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
				output << a[i] << " ";
			}

			cout << endl;
			output << endl << endl;

			quickSort(a, 0, size - 1);

			cout << endl;
			output << endl;

			for (int i = 0; i < size; i++)
			{
				a[i] = original[i];
			}

			cout << "Merge Sort: " << endl;
			output << "Merge Sort: " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
				output << a[i] << " ";
			}

			cout << endl;
			output << endl << endl;

			mergeSort(a, 0, size - 1);

			cout << endl;
			output << endl;
			main();
		}
		else if (choice == 2)
		{
			Array<double> a(size);
			double in;
			cout << "Enter data separated by a space. " << endl;
			output << "Enter data separated by a space. " << endl;
			for (int i = 0; i < size; i++)
			{
				cin >> in;
				output << in << " ";
				a[i] = in;
			}
			cin.clear();
			cin.ignore();
			cout << endl;
			output << endl << endl;

			Array<double> original(size);
			for (int i = 0; i < size; i++)
			{
				original[i] = a[i];
			}

			cout << "Insertion Sort: " << endl;
			output << "Insertion Sort: " << endl;
			for (int i = 0; i < a.sizeFn(); i++)
			{
				cout << a[i] << " ";
				output << endl;
			}

			cout << endl;
			output << endl << endl;

			insertionSort(a, size);

			cout << endl;
			output << endl;

			for (int i = 0; i < size; i++)
			{
				a[i] = original[i];
			}

			cout << "Quick Sort: " << endl;
			output << "Quick Sort: " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
				output << a[i] << " ";
			}

			cout << endl;
			output << endl << endl;

			quickSort(a, 0, size - 1);

			cout << endl;
			output << endl;

			for (int i = 0; i < size; i++)
			{
				a[i] = original[i];
			}

			cout << "Merge Sort: " << endl;
			output << "Merge Sort: " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
				output << a[i] << " ";
			}

			cout << endl;
			output << endl << endl;

			mergeSort(a, 0, size - 1);

			cout << endl;
			output << endl;
			main();
		}

		else if (choice == 3)
		{
			Array<char> a(size);
			char in;
			cout << "Enter data separated by a space. " << endl;
			output << "Enter data separated by a space. " << endl;
			for (int i = 0; i < size; i++)
			{
				cin >> in;
				output << in << " ";
				a[i] = in;
			}
			cin.clear();
			cin.ignore();
			cout << endl;
			output << endl << endl;

			Array<char> original(size);
			for (int i = 0; i < size; i++)
			{
				original[i] = a[i];
			}

			cout << "Insertion Sort: " << endl;
			output << "Insertion Sort: " << endl;
			for (int i = 0; i < a.sizeFn(); i++)
			{
				cout << a[i] << " ";
				output << endl;
			}

			cout << endl;
			output << endl << endl;

			insertionSort(a, size);

			cout << endl;
			output << endl;

			for (int i = 0; i < size; i++)
			{
				a[i] = original[i];
			}

			cout << "Quick Sort: " << endl;
			output << "Quick Sort: " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
				output << a[i] << " ";
			}

			cout << endl;
			output << endl << endl;

			quickSort(a, 0, size - 1);

			cout << endl;
			output << endl;

			for (int i = 0; i < size; i++)
			{
				a[i] = original[i];
			}

			cout << "Merge Sort: " << endl;
			output << "Merge Sort: " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
				output << a[i] << " ";
			}

			cout << endl;
			output << endl << endl;

			mergeSort(a, 0, size - 1);

			cout << endl;
			output << endl;
			main();
		}

		else if (choice == 4)
		{
			Array<string> a(size);
			string in;
			cout << "Enter data separated by a space. " << endl;
			output << "Enter data separated by a space. " << endl;
			for (int i = 0; i < size; i++)
			{
				cin >> in;
				output << in << " ";
				a[i] = in;
			}
			cin.clear();
			cin.ignore();
			cout << endl;
			output << endl << endl;

			Array<string> original(size);
			for (int i = 0; i < size; i++)
			{
				original[i] = a[i];
			}

			cout << "Insertion Sort: " << endl;
			output << "Insertion Sort: " << endl;
			for (int i = 0; i < a.sizeFn(); i++)
			{
				cout << a[i] << " ";
				output << endl;
			}

			cout << endl;
			output << endl << endl;

			insertionSort(a, size);

			cout << endl;
			output << endl;

			for (int i = 0; i < size; i++)
			{
				a[i] = original[i];
			}

			cout << "Quick Sort: " << endl;
			output << "Quick Sort: " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
				output << a[i] << " ";
			}

			cout << endl;
			output << endl << endl;

			quickSort(a, 0, size - 1);

			cout << endl;
			output << endl;

			for (int i = 0; i < size; i++)
			{
				a[i] = original[i];
			}

			cout << "Merge Sort: " << endl;
			output << "Merge Sort: " << endl;

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
				output << a[i] << " ";
			}

			cout << endl;
			output << endl << endl;

			mergeSort(a, 0, size - 1);

			cout << endl;
			output << endl;
			main();
		}
	
	//system("pause");
	return 0;
}