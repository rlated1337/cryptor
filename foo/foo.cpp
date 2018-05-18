// foo.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "File.h"

int main()
{
	/*FILE ENCRYPTOR */

	int result;
	std::string eingabeFile;
	File *myFile;

	std::cout << "Filename:" << std::endl;
	std::cin >> eingabeFile;
	
	myFile = new File(eingabeFile);
	
	if (myFile->renameFile()) {
		puts("File successfully encrypted");
	}
	else {
		perror("Error encrypting");
	}

	system("pause");
	return 0;
}

