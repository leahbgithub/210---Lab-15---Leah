// 210 - Lab 15 - Leah Balakrishnan
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// definition for the Movie class with private and public attributes
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
    // Opens the input file that has all of the date for the movie
    ifstream inputFile("input.txt");
    
    // Check if there is error with opening, if so---then display error message
    if(!inputFile) {
        cerr << "Error with opening file." << endl;
        return 1;
    }
    
    vector<Movie> movies; // vector stores movie objects
    string title, screenWriter;
    int yearReleased;
    
    // reads file dataa
    while(getline(inputFile, title) && inputFile >> yearReleased) {
        inputFile.ignore(); // ignores newline characters in the stream
        getline(inputFile, screenWriter);
        
        Movie tempMovie; // movie temp object
        tempMovie.setTitle(title);
        tempMovie.setYearReleased(yearReleased);
        tempMovie.setScreenWriter(screenWriter);
        
        movies.push_back(tempMovie); // puts temp movie object into vector for movie
    }
    
    inputFileclose();
}
