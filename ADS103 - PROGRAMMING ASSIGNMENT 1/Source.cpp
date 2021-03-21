#include <iostream>
#include <string>
#include <chrono>
#include <fstream>
#include "LinkedList.h"

using namespace std;

void main()
{
	//creating two empty linked lists
	LinkedList list1;
	LinkedList list2;

	//reading from input file
	ifstream readFile;
	readFile.open("input-a1q2.txt");

	//create variable n to store amount of random numbers from text file
	int n;
	readFile >> n;
	readFile.close();

	cout << "Work in progress..." << endl;
	//insert at front for list1
	chrono::steady_clock::time_point begin = chrono::steady_clock::now();
	list1.insertAtBeginning(n);
	chrono::steady_clock::time_point end = chrono::steady_clock::now();
	double time1 = chrono::duration_cast<chrono::milliseconds>(end - begin).count();
	//list1.displayList();
	cout << "\n\n";
	cout << "Task 1 completed." << endl;

	//insert at back for list2
	chrono::steady_clock::time_point begin2 = chrono::steady_clock::now();
	list2.insertAtBeginning(1);
	list2.insertAtEnd(n);
	chrono::steady_clock::time_point end2 = chrono::steady_clock::now();
	double time2 = chrono::duration_cast<chrono::milliseconds>(end2 - begin2).count();
	//list2.displayList();
	cout << "\n\n";
	cout << "Task 2 completed." << endl;

	// delete from front list1
	chrono::steady_clock::time_point begin3 = chrono::steady_clock::now();
	list1.deleteFromBeginning(n);
	chrono::steady_clock::time_point end3 = chrono::steady_clock::now();
	double time3 = chrono::duration_cast<chrono::milliseconds>(end3 - begin3).count();
	//list1.displayList();
	cout << "\n\n";
	cout << "Task 3 completed." << endl;

	// delete from back list2
	chrono::steady_clock::time_point begin4 = chrono::steady_clock::now();
	list2.deleteFromEnd(n);
	chrono::steady_clock::time_point end4 = chrono::steady_clock::now();
	double time4 = chrono::duration_cast<chrono::milliseconds>(end4 - begin4).count();
	//list2.displayList();
	cout << "\n\n";
	cout << "Task 4 completed." << endl;

	//write time recorded into file
	ofstream  writeFile;
	writeFile.open("output-a1q2.txt");

	writeFile << time1 << "ms" << endl;
	writeFile << time2 << "ms" << endl;
	writeFile << time3 << "ms" << endl;
	writeFile << time4 << "ms" << endl;
	writeFile.close();

	system("pause");
}