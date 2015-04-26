#ifndef CONVERT_H
#define CONVERT_H
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 

class Converter{
	private:
	
	public:
		Converter();
		~Converter();
		City* NewVCity();
		void addEdge(std::string v1, std::string v2, int weight);
		void addVertex(std::string n);
		void displayEdges();
		void shortestPath(std::string startingCity, std::string destination);
		void findDistricts();
		void shortestDistance(std::string startingCity, std::string destination);
};
#endif // CONVERT_H