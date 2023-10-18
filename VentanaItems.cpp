#include <iostream>
#include <cstring>
#include <vector>
#include "Items.h"
#include "VentanaItems.h"
using namespace std;
using namespace NexaGest;


VentanaItems::VentanaItems() {
	VentanaItems nueva;
	nueva.InitializeComponent();
	vector<Items> vectorItems;
}

void VentanaItems::cargarVector(vector<Items> vectorItems) {
	FILE* P;
	P = fopen("./Items.gest", "wb");
	Items item;
	while (fread(&item, sizeof(Items), 1, P)) {
		vectorItems.push_back(item);
	}
	for (int i = 0; i < vectorItems.size(); i++) {
		cout << vectorItems[i].getNombre();

	}

}


