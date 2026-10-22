#include <iostream>
#include <cmath>
#include <cstdlib>
//PyCo 1.0 Beta//
using namespace std;

int main() {
	//variables//
	string command;
	string text;
	int while1 = 1;
	int whileprint = 0;
	int whileprint2 = 2;
	int whilenumber;
	double number1, number2;
	double FLO;
	double printWF;
	string printFLO;
	string csymbols;
	string color;
	string STR;
	string printSTR;
	//variablesend//
	//code//
	cout << "------------------\n";
	cout << "|      PyCo      |";
	cout << "\n------------------\n";
	cout << "\nYou Can Write --Help For Commands           THANKS FOR USING US";
	cout << "\nWelcome To The Pyco! version: 1.0 Beta\n\n";
	//while//
	while (while1 == 1) {
		cin >> command;
		if (command == "print")
		{
			cin >> text;
			cout << "\n";
			cout << text << "\n";
		}
		else if (command == "printWF")
		{
			cin >> printWF;
			cin >> whilenumber;
			whileprint = 0;
			while (whileprint < whilenumber) {
				cout << printWF << "\n";
				whileprint++;
			}
		}
		else if (command == "printWI")
		{
			cin >> text;
			while (whileprint2 == 2) {
				cout << text;
			}
		}
		else if (command == "about")
		{
			cout << "\n----------------------------------------------";
			cout << "\nPyCo is a minimalist command-line interpreter";
			cout << "\ndeveloped by Yasir Erdem Cetin";
			cout << "\nUnder Pyber Studio (Solo Development)";
			cout << "\n----------------------------------------------\n";
		}
		else if (command == "setFLO")
		{
			cin >> FLO;
			cin >> printFLO;
			if (printFLO == "printFLO")
			{
				cout << "\n" << FLO << "\n";
			}
			else
			{
				cout << "\nWrong Command! CODE(001)\n";
			}
		}
		else if (command == "setSTR")
		{
			cin >> STR;
			cin >> printSTR;
			if (printSTR == "printSTR")
			{
				cout << "\n" <<  STR << "\n";
			}
			else
			{
				cout << "\nWrong Command! CODE(001)\n";
			}
		}
		else if (command == "printW")
		{
			cin >> text;
			cin >> whilenumber;
			whileprint = 0;
			while (whileprint < whilenumber) {
				cout << text << "\n";
				whileprint++;
			}
		}
		else if (command == "colorR")
		{
			system("color 0C");
		}
		else if (command == "colorB")
		{
			system("color 0B");
		}
		else if (command == "colorG")
		{
			system("color 0A");
		}
		else if (command == "--Help")
		{
			cout << "\nprintC is used to calculate numbers once you write printC then write the first number then second number then select the math symbol you want and thats it\n";
			cout << "\nmultiplication = X   division = :   addition = +   subtraction = -   taking the exponent of a number = XX\n";
			cout << "\nprint is used to write what do you want first write print then write what you want and thats it\n";
			cout << "\n If you want to close PyCo you can write quit or exit\n";
			cout << "\nIf you want your texts to change color you can write color use colorG for green colorB for blue and colorR for red\n";
			cout << "\nIf you want to print the text you want not just once but as many times as you want like 6 times or 35 times you can use the printW command after writing the printW command you can type the text you want to print and then write the number of times you want it printed and it'll print it that many times basically this command applies a while loop to the text you want\n";
			cout << "\nsetSTR is used to print text by writing setSTR, then your text, and finally the word printSTR right after it\n";
			cout << "\nsetFLO is used to print numbers by writing setFLO, then the number, and finally the word printFLO right after it\n";
			cout << "\nabout is used to display detailed information about PyCo, its version, and its creator Yasir Erdem Cetin under Pyber Studio\n";
			cout << "\nprintWI Prints the text you enter on the next line into an infinite loop after pressing Enter\n";
			cout << "\nprintWF prints the decimal or integer you want as many times as you want with the while dong, if it is used, you type printWF at first, then press enter and type the number you want when you move to the bottom line, then switch to the bottom line and type the number you want as many times, and the size of the number you want is written as many times as you want\n";
		}
		else if (command == "quit" or command == "exit")
		{
			cout << "\n PyCo Is Closing Bye Bye!\n";
			return 0;
		}
		else if (command == "printC")
		{
			cin >> number1;
			cin >> number2;
			cin >> csymbols;
			if (csymbols == "+")
			{
				cout << "\n";
				cout << number1 + number2 << "\n";
			}
			else if (csymbols == "-")
			{
				cout << "\n";
				cout << number1 - number2 << "\n";
			}
			else if (csymbols == "x")
			{
				cout << "\n";
				cout << number1 * number2 << "\n";
			}
			else if (csymbols == ":")
			{
				cout << "\n";
				cout << number1 / number2 << "\n";
			}
			else if (csymbols == "xx")
			{
				cout << "\n";
				cout << pow(number1, number2) << "\n";
			}
		}
		else
		{
			cout << "\nWrong Command! CODE(001)\n";
		}
	}
	return 0;
}