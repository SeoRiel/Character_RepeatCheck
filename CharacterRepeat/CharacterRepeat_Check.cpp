#include <iostream>

int main()
{
	std::string previous{ " " };	    // 비교할 문자열
	std::string current{};				// 입력받을 문자열
	int count{ 1 };						// 문자열 개수 체크

	std::cout << "문자열을 입력하세요 : ";
	while (std::cin >> current)
	{
		std::cout << "count : " << count << std::endl;
		if (previous == current)
		{
			std::cout << count << "번째 단어, " << current << "가 중복되었습니다." << std::endl;
			count = 0;
			continue;
		}

		previous = current;

		count++;
	}

	return 0;
}