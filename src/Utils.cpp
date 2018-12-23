#include <functional>
#include "Utils.h"

template <class T>
std::string toString(T &reference){

	std::string name = typeid(reference).name();
	return name + "@" + std::hash<T>()(reference);
}

