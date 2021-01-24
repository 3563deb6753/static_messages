#ifndef MESSAGE_H
#define MESSAGE_H
#include <string>
#include <iostream>
class Speaker{
	std::string name;
	static int size; //static data member holds number of strings in conversation
	static std::string conversation[]; //holds chronological conversation
public:
	Speaker(std::string nm){
		name = nm;
	}
	~Speaker(){}
	const static int MAX = 25; //maximum size of conversation
	static void printConversation(){
		int count = 0; //count holds the lines printed
		while (count < size){
			std::cout << conversation[count] << std::endl;
			count++;
		}
	}
	void sendMessage(std::string msg);	
};


#endif
