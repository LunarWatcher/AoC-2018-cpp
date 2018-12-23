#include "Day1.h"
#include <fstream>
#include <iostream>
#include <algorithm>

int Day1::part1(std::vector<int> &data){
    int sum = 0;
    for(const int &num : data){
    	sum += num;
    }

    return sum;
}

int Day1::part2(std::vector<int> &data){
	std::vector<int> checked;
	int currNum = 0;
	while(true){
		for(const int &num : data){
			currNum += num;
			if(std::find(checked.begin(), checked.end(), currNum) != checked.end())
				return currNum;
			else checked.push_back(currNum);
		}


	}

}

std::vector<int> Day1::processData(std::vector<std::string> &data){ throw "Not used."; }

Day1::~Day1(){
}

Day1::Day1() {
	std::cout << "Loading day 1 file...\n";
    std::ifstream stream("../res/day1.txt");
    if(!stream){
    	throw "Failed to open file.";
    }
    std::vector<int> numbers;

    std::string cache;
    while(std::getline(stream, cache)) {
    	numbers.push_back(std::stoi(cache));
    }
    this->numberData = numbers;


    std::vector<int> case1 = { 1, 1, 1 }; // 3
    std::vector<int> case2 = { 1, 3, -1}; // 3
    std::cout << "Running test cases...";
    int case1Result = part1(case1);
    if(case1Result != 3)
    	throw "Test case 1 failed.";
    int case2Result = part1(case2);
    if(case2Result != 3)
    	throw "Test case 2 failed.";

    std::cout << " Test cases successful.\n";

    int part1Res = part1(numberData);
    std::cout << "Part 1: " << part1Res << std::endl;

    int part2Res = part2(numberData);
    std::cout << "Part 2: " << part2Res << "\n";

}


