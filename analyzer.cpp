/*
 * Authored by Angelina Wu and Adam Cheng
 */

#include "StringData.h"
#include <iostream>

using namespace std;


int linearSearch(vector<string> container, string element) {

    for(int i = 0; i < container.size(); ++i) {
        if(container.at(i) == element) {
            return i;
        }
    }

    return -1;
}


int binarySearch(vector<string> container, string element) {

    int left = 0;
    int right = container.size() - 1;

    while(right >= left) {

        int mid = (left + right) / 2;

        if(element > container.at(mid)) {
            left = mid + 1;
        }
        else if(element < container.at(mid)) {
            right = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1;
}


int main() {

    vector<string> dataset = getStringData();
    int startTime;
    int endTime;
    int index;


    cout << "Searching for 'not_here' using linear search." << endl;
    startTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    index = linearSearch(dataset, "not_here");
    endTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << "The time for linear search is " << endTime - startTime << endl;
    cout << "The index of 'not_here' is " << index << "." << endl << endl;

    cout << "Searching for 'not_here' using binary search." << endl;
    startTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    index = binarySearch(dataset, "not_here");
    endTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << "The time for binary search is " << endTime - startTime << endl;
    cout << "The index of 'not_here' is " << index << "." << endl << endl;

    cout << "Searching for 'mzzzz' using linear search." << endl;
    startTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    index = linearSearch(dataset, "mzzzz");
    endTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << "The time for linear search is " << endTime - startTime << endl;
    cout << "The index of 'mzzzz' is " << index << "." << endl << endl;

    cout << "Searching for 'mzzzz' using binary search." << endl;
    startTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    index = binarySearch(dataset, "mzzzz");
    endTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << "The time for binary search is " << endTime - startTime << endl;
    cout << "The index of 'mzzzz' is " << index << "." << endl << endl;

    cout << "Searching for 'aaaaa' using linear search." << endl;
    startTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    index = linearSearch(dataset, "aaaaa");
    endTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << "The time for linear search is " << endTime - startTime << endl;
    cout << "The index of 'aaaaa' is " << index << "." << endl << endl;

    cout << "Searching for 'aaaaa' using binary search." << endl;
    startTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    index = binarySearch(dataset, "aaaaa");
    endTime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << "The time for binary search is " << endTime - startTime << endl;
    cout << "The index of 'aaaaa' is " << index << "." << endl << endl;

    return 0;
}
