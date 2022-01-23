#include <utility>
#include <vector>
#include <iterator>
#include <iostream>

unsigned int number(const std::vector<std::pair<int, int>>& busStops)
{
	int totalGetIn = 0;
	int totalGetOut = 0; 
	std::vector<std::pair<int, int>>::const_iterator it;
	for(it = busStops.begin(); it != busStops.end(); it++)
    {
        int getIn = (*it).first;
        int getOut = (*it).second;
        totalGetIn += getIn;
        totalGetOut += getOut;
    }
    return totalGetIn - totalGetOut;
}

int main()
{
	std::vector<std::pair<int, int>> busStops; 
	std::pair<int, int> p1(3, 0);
	std::pair<int, int> p2(9, 1);
	std::pair<int, int> p3(4, 8);
	std::pair<int, int> p4(12, 2);
	std::pair<int, int> p5(6, 1);
	std::pair<int, int> p6(7, 8);
	busStops.insert(busStops.begin(), p1);
	busStops.insert(busStops.begin(), p2);
	busStops.insert(busStops.begin(), p3);
	busStops.insert(busStops.begin(), p4);
	busStops.insert(busStops.begin(), p5);
	busStops.insert(busStops.begin(), p6);
	int remainNumber = number(busStops);
	std::cout << remainNumber << std::endl;
}
