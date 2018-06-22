// Assignment11.cpp : Defines the entry point for the console application.
//

//all the extra name space stuff is in the stdafx.h header file 
//the function definitions are in functions.h
#include "stdafx.h"
#include "Functions.h"



int main()
{
	//sets a string name to the out put of the startup function in the function definition .cpp
	string name = startUp();
	pretzle();
	weatherRock("dry");
	weatherRock("wet");
	system("pause");

    return 0;
}

