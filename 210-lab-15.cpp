// comsc 210 | lab 15 | Martha Stephanie Villalta

// print method
// Needs to read data IN from an input file in specified order: title, yearReleased, screenWriter.
// read/pass this data into temporary Movie object.
// append that object to a container: <array> / <vector>
// Towards end of main(): output data in array/vector.

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Movie {
    //priavet class members. class is default private.
    string title;
    int year;
    string name;

    public:
    //getters:
    string getTitle() { return title; } //I realize now that inline is convenient for short code and nice to use.
    int getYear() { return year; } // I still prefer to keep it more spread out though.
    string getName() { return name; }
    //setters:
    void setTitle(string t) { title = t; }
    void setYear(int y) { year = y; }
    void setName(string n) { name = n; }
    
    //found out that when people use the term "method", in C++, it means it's a class member!
    void print() {
       // cout << w
    }
};

int main() {

    vector<Movie> movies;
    ifstream file ("movies.txt");

    return 0;
}