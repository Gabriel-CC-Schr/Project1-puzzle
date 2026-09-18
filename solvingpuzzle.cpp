#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;



ofstream result("./result", ios::out);

ifstream puzzle("./puzzle.txt", ios::in);

static const vector<vector<int>> puzzle_data;
