#include <iostream>

using namespace std;

int main(){
	//Defines a
	int room_length = 10;
	int room_width = 10;
	char question; 
	//float room_radius = 10;
	 bool keep_running = true;
	 while(keep_running){
		cout << "Enter the room length:" << endl;
		cin >> room_length;
	 
		cout << "Enter the room width:" << endl;
		cin >> room_width;
		//Prints out stuff
		//cout << "Our first number is " << room_length << endl;
		//cout << "Our second number is " << room_width << endl;
		//cout << "If you add them you get " << room_length + room_width << endl;
		//cout << "Unless your room is a circle " <<
		//(room_radius * room_radius) * 3.14 << endl;
		
		if (room_length == room_width){
		cout << "Length and Width are the same" << endl;		
		}
		else{
		cout << "Length and Width are not the same" << endl;
		}
	
		cout << "Do you want to keep running?" << endl;
		cin >> question;
		
		if (question != 'y'){keep_running = false;}
		/*this is how
		to do a
		multi-line comment*/
	
		// == != > < >= <= 
	
	
	 }
	 return 0;
}

