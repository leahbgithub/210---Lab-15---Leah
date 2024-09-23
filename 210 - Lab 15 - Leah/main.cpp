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

};
