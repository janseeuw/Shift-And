#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include "shift-and.h"

using namespace std;

typedef unsigned int uint;
typedef unsigned char uchar;


int main(int argc, char *argv[]) {
	uchar* pattern = (uchar*)"alpha";
	uchar* text = (uchar*)"alpha beta alpha charly";
	
	Shiftand sa(pattern, 5);
	
	queue<const uchar*> places;
	
	sa.search(places, text, 23);
	
	while(!places.empty()){
		cout<<places.front()<<endl;
		places.pop();
	}
	
	return 0;
}