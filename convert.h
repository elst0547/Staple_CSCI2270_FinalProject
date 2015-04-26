#ifndef CONVERT_H
#define CONVERT_H
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 

using namespace std;

struct stringLinkedList
{
	string title;
	stringLinkedList *next;
};

class Converter{
	private:
	
	public:
		Converter();
		~Converter();
		City* NewVCity();
		stringLinkedList ConvertArrToLinkedList(string array, int size);
		string* ConvertLLToArray(stringLinkedList root);
		vector<string> arrayToVector(string[] str);
		string* vectorToArray(vector<string> vec);
		stringLinkedList vectorToLinkedList(vector<string> vec)
};
#endif // CONVERT_H