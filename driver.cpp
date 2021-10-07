
//Lab 2

#include <iostream>
#include <cassert>
#include "sequence.h"

using namespace std;

int main()
{
	sequence<int> obj;

	int input = 0;

	while (input != 6)
	{
		cout << "\nElement Menu" << endl;
		cout << "1. Add Element to List(push_back)\n";
		cout << "2. Add Element at particular position(insert)\n";
		cout << "3. Overwrite Element at position(set)\n";
		cout << "4. Remove Element at postion(remove)\n";
		cout << "5. Show Element at position(print)\n";	
		cout << "6. Quit Program\n";
		
		cout << "\nChoice: ";
		cin >> input;
		cout << endl;
		
		switch (input)
		{
			int value, position;
		case 1:
			cout << "What value do you want to add?\nValue: ";
			cin >> value;
			obj.push_back(value);
			break;
		case 2:
			cout << "What value do you want to add?\nValue: ";
			cin >> value;
			cout << "What position do you want to add it to?\nPosition: ";
			cin >> position;
			obj.insert(value, position);
			break;
		case 3:
			cout << "What value do you want to add?\nValue: ";
			cin >> value;
			cout << "At what position do you want to overwrite?\nPosition: ";
			cin >> position;
			obj.set(value, position);
			break;
		case 4:
			cout << "What position do you want to remove?\nPosition: ";
			cin >> value;
			obj.remove(value);
			break;
		case 5:
			obj.print();
		}
	}

	cout << "You have exited the program. Good Bye.\n";

	return 0;
}

//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 20
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 30
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 35
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 50
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 65
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 85
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 44
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 256
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 99
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 10
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 1
//
//What value do you want to add ?
//Value : 79
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 5
//
//Displaying element :
//Position: 0 Value : 20
//Position : 1 Value : 30
//Position : 2 Value : 35
//Position : 3 Value : 50
//Position : 4 Value : 65
//Position : 5 Value : 85
//Position : 6 Value : 44
//Position : 7 Value : 256
//Position : 8 Value : 99
//Position : 9 Value : 10
//Position : 10 Value : 79
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 2
//
//What value do you want to add ?
//Value : 25
//What position do you want to add it to ?
//Position : 1
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 5
//
//Displaying element :
//Position: 0 Value : 20
//Position : 1 Value : 25
//Position : 2 Value : 30
//Position : 3 Value : 35
//Position : 4 Value : 50
//Position : 5 Value : 65
//Position : 6 Value : 85
//Position : 7 Value : 44
//Position : 8 Value : 256
//Position : 9 Value : 99
//Position : 10 Value : 10
//Position : 11 Value : 79
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 3
//
//What value do you want to add ?
//Value : 86
//At what position do you want to overwrite ?
//Position : 7
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 5
//
//Displaying element :
//Position: 0 Value : 20
//Position : 1 Value : 25
//Position : 2 Value : 30
//Position : 3 Value : 35
//Position : 4 Value : 50
//Position : 5 Value : 65
//Position : 6 Value : 85
//Position : 7 Value : 86
//Position : 8 Value : 256
//Position : 9 Value : 99
//Position : 10 Value : 10
//Position : 11 Value : 79
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 4
//
//What position do you want to remove ?
//Position : 10
//Element deleted
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 5
//
//Displaying element :
//Position: 0 Value : 20
//Position : 1 Value : 25
//Position : 2 Value : 30
//Position : 3 Value : 35
//Position : 4 Value : 50
//Position : 5 Value : 65
//Position : 6 Value : 85
//Position : 7 Value : 86
//Position : 8 Value : 256
//Position : 9 Value : 99
//Position : 10 Value : 79
//
//Element Menu
//1. Add Element to List(push_back)
//2. Add Element at particular position(insert)
//3. Overwrite Element at position(set)
//4. Remove Element at postion(remove)
//5. Show Element at position(print)
//6. Quit Program
//
//Choice : 6
//
//You have exited the program.Good Bye.