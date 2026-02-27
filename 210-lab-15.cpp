// comsc 210 | lab 15 | Martha Stephanie Villalta

// print method

// append that object to a container: <array> / <vector>
// Towards end of main(): output data in array/vector.

#include <iostream>
#include <iomanip>
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
    
    //found out that when people use the term "method" in C++, it means it's a class member specifically...?
    void print() {
       cout << "Movie: " << title << endl;
       cout << "Year Released: " << year << endl;
       cout << "Screenwrite: " << name << endl;
    }
};

int main() {

    vector<Movie> movies;
    ifstream file; // object var. of ifstream type.
    string t; //temporary var for Title
    int y; //temp. var. for year
    string n; // temp. var. for name.
    
    file.open("movies.txt");
    if(!file) { // I want to make sure that the input file is found first.
        cout << "Error: Can't find file. Please try again." << endl;
        exit(-1);
    }
    while(!file.eof()) {
        getline(file, t);
        file >> y;
        file.ignore();
        getline(file, n);
        Movie tmp_M;
        tmp_M.setTitle(t);
        tmp_M.setYear(y);
        tmp_M.setName(n);
        movies.push_back(tmp_M);
    }
    file.close();

    for(auto var : movies) {
        cout << var.getTitle() << endl;
    }

    return 0;
}