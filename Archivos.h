#pragma once
#include <vector>
#include <iostream>
#include <cstring>



class Archivos
{

public:
	std::vector<Items> vectorItems;
	Archivos();
	void cargarVectorItems();
	void setVectorItems(std::vector<Items> vector);
	void guardarVectorItems();
};

