#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outFile;
	string line; // store current line (as plaintext)
	string encLine; // store ciphertext in this string
	int lineNum = 1; // keep track of what line is being proccessed

	//open the files.
	inputFile.open("plain.txt");
	outFile.open("coded.txt");

	while (getline(inputFile, line)) // while we can get a line, we want to do stuff with the line we got.
	{
		encLine = line; // copy line into encLine before encrypting so that encLine (a string, i.e. a char array) is the right size
		for (int i = 0; i < line.length(); i++)
		{
			encLine[i] = line[i] + (lineNum - 1) % 6 + 1; // Formula provided in prompt
		}
		outFile << encLine << '\n'; // Store the line of cypthertext, encLine, in the file outFile.
		lineNum++;
	}

	inputFile.close();
	outFile.close();

	return 0;
}

