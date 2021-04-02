//Simon Matz Assessment 2 - Question 2
//Github respository link: https://github.com/SimonMatz/SimonMatz

#include <iostream>
#include <string>
#include <chrono>
#include <fstream>
#include "LinkedList.h"
#include "Functions.h"

using namespace std;

void main()
{
	//reading from input file
	ifstream readFile;
	readFile.open("input-a1q2.txt");

	//create variable n to store amount of random numbers from text file
	int n;
	readFile >> n;
	readFile.close();

	int time1 = task1(n);
	int time2 = task2(n);
	int time3 = task3(n);
	int time4 = task4(n);

	//calling function to write time recorded into file
	writeToFile(time1, time2, time3, time4);

	system("pause");
}