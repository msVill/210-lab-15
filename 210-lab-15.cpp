/* Comsc 210 | Lab #15 | Martha Stephanie Villalta
    IDE Used: VSCode
*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Movie {
    private:
        string title;
        int yearReleased;
        string screenWrite;

        public:
            //getters
            string get Title() const { return title; }
            int getYearReleased() const { return yearReleased; }
            string getScreenWriter() const {return screenWriter; }

            //setters
            void setTitle(string t) { title = t; }
            void setYearReleased(int y) {yearReleaded = y; }
            void setScreenWriter(string s) { return screenWriter = s; }

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
        
    }
}