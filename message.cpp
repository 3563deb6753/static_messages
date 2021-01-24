#include "Message.h"
#include <iostream>
using namespace std;

//definitions of static data members
int Speaker::size = 0; 
std::string Speaker::conversation[MAX]= {}; 

void Speaker::sendMessage(string msg){
	string line = name + ": " + msg;
	/*If the conversation exceeds the maximum, clear the conversation and start
	again.  It could be improved by a circular array or linked list that does
	not have to clear or copy the whole conversation.*/
	if (size == MAX) 
		size = 0;
	conversation[size] = line;
	size++;
}

