// foo.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "File.h"

void encrypt();

int main()
{
	int uc;
	std::cout << "File Encrypt (1) --- File Decrypt (2)" << std::endl;
	std::cin >> uc;

	switch (uc) {
	case 1:
		//Encrypt
		encrypt();
		break;
	case 2:
		//Decrypt

		break;
	default:
		perror("Not a valid choice");

		break;

	}

	system("pause");
	return 0;
}

void encrypt() {
	std::string eingabeFile;
	File *myFile;

	std::cout << "Filename (with Extension):" << std::endl;
	std::cin >> eingabeFile;

	myFile = new File(eingabeFile);

	if (myFile->renameFile()) {
		puts("File successfully encrypted");
		puts("New File Name:");
		std::string newFileName = myFile->getHashName() + myFile->getExtension();
		puts(newFileName.c_str());
	}
	else {
		perror("Error encrypting");
	}
}
