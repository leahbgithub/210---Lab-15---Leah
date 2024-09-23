// 210 - Lab 15 - Leah Balakrishnan
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
    // Below are the setters
    void setTitle(const string& title) {
        this->title = title;
    }
    
    void setYearReleased(int yearReleased) {
        this->yearReleased = yearReleased;
    }
    
    void setScreenWriter(const string& screenWriter) {
        this->screenWriter = screenWriter;
    }
    
    // Below are the getters
    string getTitle() const {
        return title;
    }
    
    int getYearReleased() const {
        return yearReleased;
    }
    
    string getScreenWriter() const {
        return screenWriter;
    }
    
    // Method which will use print() to display the details of the movie
    void print() const {
        cout << "Film Title: " << title << endl;
        cout << "Year Released: " << yearReleased << endl;
        cout << "Screenwriter: " << screenWriter << endl;
    }

};

// Now we create our main program
int main() {
    ifstream inputFile("input.txt");
    
    if(!inputFile) {
        cerr << "Error with opening file." << endl;
        return 1;
    }
    
    vector<Movie> movies;
    string title, screenWriter;
    int yearReleased;
    
    while(getline(inputFile, title) && inputFile >> yearReleased) {
        inputFile.ignore();
        getline(inputFile, screenWriter);
        
        Movie tempMovie;
        tempmovie.
    }
}
