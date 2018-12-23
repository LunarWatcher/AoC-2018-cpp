
#ifndef SRC_CHALLENGE_H_
#define SRC_CHALLENGE_H_


template <class I, class L, class R>
class Challenge {
protected:
	virtual L processData(I &rawData) = 0;
public:
	virtual ~Challenge(){}
	virtual R part1(L &data) = 0;
	virtual R part2(L &data) = 0;
};

#endif /* SRC_CHALLENGE_H_ */
