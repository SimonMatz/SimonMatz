#include <iostream>
#include <string>
#include <chrono>
#include <fstream>
#include "LinkedList.h"

using namespace std;

void main()
{
	LinkedList list1;
	LinkedList list2;

	//reading from a file
	ifstream readFile;
	readFile.open("input-a1q2.txt");

	int n;
	readFile >> n;
	readFile.close();

	cout << n << endl << endl;



	//insert at front for list1
	chrono::steady_clock::time_point begin = chrono::steady_clock::now();
	for (int i = 0; i < n; i++)
	{
		list1.insertAtBeginning(rand());
	}

	chrono::steady_clock::time_point end = chrono::steady_clock::now();
	double time1 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();

	cout << "\nList1 inserted from front" << endl;
	//list1.displayList();
	
	cout << "\n";






	//insert at back for list2
	chrono::steady_clock::time_point begin2 = chrono::steady_clock::now();
	for (int i = 0; i < n; i++)
	{
		list2.insertAtEnd(rand());
	}

	chrono::steady_clock::time_point end2 = chrono::steady_clock::now();
	double time2 = chrono::duration_cast<chrono::milliseconds>(end2 - begin2).count();

	cout << "\nList2 inserted from back" << endl;
	//list2.displayList();
	cout << "\n\n";




	cout << "\nList1 before deletion" << endl;
	//list1.displayList();

	chrono::steady_clock::time_point begin3 = chrono::steady_clock::now();
	for (int i = 0; i < n; i++)
	{
		list1.deleteFromBeginning();
	}
	chrono::steady_clock::time_point end3 = chrono::steady_clock::now();
	double time3 = chrono::duration_cast<chrono::milliseconds>(end3 - begin3).count();

	cout << "\nList1 deleted from front" << endl;
	
	cout << "\n";




	cout << "\nList2 before deletion" << endl;
	//list2.displayList();
	chrono::steady_clock::time_point begin4 = chrono::steady_clock::now();
	for (int i = 0; i < n; i++)
	{
		list2.deleteFromEnd();
	}
	chrono::steady_clock::time_point end4 = chrono::steady_clock::now();
	double time4 = chrono::duration_cast<chrono::milliseconds>(end4 - begin4).count();

	cout << "\nList2 deleted from back" << endl;
	
	cout << "\n\n";








	ofstream  writeFile;
	writeFile.open("output-a1q2.txt");

	writeFile << time1 << "ms" << endl;
	writeFile << time2 << "ms" << endl;
	writeFile << time3 << "ms" << endl;
	writeFile << time4 << "ms" << endl;
	writeFile.close();


	cout << "\n\n";
	system("pause");
	

	
	 
	
}