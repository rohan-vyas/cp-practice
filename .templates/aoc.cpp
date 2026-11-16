#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Advent of Code: reads the puzzle input from the file given as argv[1]
// (default input.txt next to this file). Inputs are personal: never commit them.
int main(int argc, char** argv) {
    string path = argc > 1 ? argv[1] : "input.txt";
    ifstream in(path);
    if (!in) { cerr << "missing " << path << "\n"; return 1; }
    vector<string> lines;
    for (string s; getline(in, s);) lines.push_back(s);

    ll part1 = 0, part2 = 0;
    // solve here

    cout << "part 1: " << part1 << "\npart 2: " << part2 << "\n";
}
