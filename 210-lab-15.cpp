/* Comsc 210 | Lab #15 | Martha Stephanie Villalta
    IDE Used: VSCode
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Movie {
    private:
        string title;
        int yearReleased;
        string screenWriter;

        public:
            //getters
            string getTitle() const { return title; }
            int getYearReleased() const { return yearReleased; }
            string getScreenWriter() const {return screenWriter; }

            //setters
            void setTitle(string t) { title = t; }
            void setYearReleased(int y) {yearReleased = y; }
            void setScreenWriter(string s) { screenWriter = s; }

            //print method
            void print() const {
                cout << "Movie: " << screenWriter << endl;
                cout << "   Year released: " << yearReleased << endl;
                cout << "   Screenwriter: " << title << endl;
                cout << endl;
            }
};

int main() {
    ifstream fin("input.txt");
    vector<Movie> movies;

    if(!fin) {
        cout << "Error: input.txt not found." << endl;
        return 1;
    }

    while(true) {
        string title, writer;
        int year;

        if(!getline(fin, title)) break; 
    }
}