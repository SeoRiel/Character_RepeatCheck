#include <iostream>

int main()
{
	std::string previous{ " " };	    // ���� ���ڿ�
	std::string current{};				// �Է¹��� ���ڿ�
	int count{ 1 };						// ���ڿ� ���� üũ

	std::cout << "���ڿ��� �Է��ϼ��� : ";
	while (std::cin >> current)
	{
		std::cout << "count : " << count << std::endl;
		if (previous == current)
		{
			std::cout << count << "��° �ܾ�, " << current << "�� �ߺ��Ǿ����ϴ�." << std::endl;
			count = 0;
			continue;
		}

		previous = current;

		count++;
	}

	return 0;
}