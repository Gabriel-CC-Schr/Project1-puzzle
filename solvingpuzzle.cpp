#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    const string inputPuzzleFile = string(argv[1]);
    const string puzzleinput = inputPuzzleFile + ".txt";

    // Check if the input file exists and is readable
    ifstream inputFile(inputPuzzleFile);
    if (!inputFile)
    {
        cerr << "Error: Cannot open file " << inputPuzzleFile << endl;
        return 1;
    }

    vector<string> words;
    string word;

    // Read words from the input file
    while (inputFile >> word)
    {
        words.push_back(word);
    }
    inputFile.close();

    // Output the words to the console
    cout << "Words read from file:\n";
    for (const auto &w : words)
    {
        cout << w << endl;
    }

    return 0;
}