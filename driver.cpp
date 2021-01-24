#include "Message.h"
#include <iostream>
using namespace std;

int main(){
	Speaker A("A"), B("B");

	/*generate more test messages than the array can hold*/
	for (int i = 0; i < Speaker::MAX+3; i++)
		A.sendMessage (to_string(i)); 
	B.sendMessage("hi from B");
	Speaker::printConversation();
}
