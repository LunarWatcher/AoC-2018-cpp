#include <string>
#include "../Challenge.h"
#include <vector>

#ifndef SRC_DAY1_DAY1_H_
#define SRC_DAY1_DAY1_H_


class Day1 : public Challenge<std::vector<std::string>, std::vector<int>, int> {
private:
	std::vector<int> numberData;
	std::vector<int> processData(std::vector<std::string> &data);
public:
	Day1();
	~Day1();
	int part1(std::vector<int> &data) override;
	int part2(std::vector<int> &data) override;
};

#endif /* SRC_DAY1_DAY1_H_ */
