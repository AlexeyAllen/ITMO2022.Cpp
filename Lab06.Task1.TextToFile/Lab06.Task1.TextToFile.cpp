#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
#include <string>


int main() {

	std::string poemText = "";

	std::ofstream file("poem.txt");

	std::cout << "Please enter some poem from keyboard. Press type in '.' to finish input: " << '\n';

	std::getline(std::cin, poemText, '.');

	file << poemText << std::endl;

	file.close();
}



//-------------------------------------------------------------------------------------------------

//using json = nlohmann::json;
//using namespace std;
//
//int main() {
//
//	// ������ ������ JSON-������
//	json j;
//	// ��������� ������, ������� ����� ��������� ��� std::string
//	j["name"] = "Test";
//	// ��������� ������ ��������� ������
//	j["nothing"] = nullptr;
//	// ����� ������ ���������� �������
//	j["answer"]["everything"] = 10;
//	// ��������� ������ ����� (����� ��������� ��� std::vector<std::string>)
//	// �������� �������� - ������������ ������ �������������
//	j["companies"] = { "Info", "TM" };
//	// ��������� ��� ���� ������ - �� ���� ��� ���������� ������ ������������� � ������ "����"-"��������"
//	j["user"] = { {"name", "solo"}, {"active", true} };
//
//	std::cout << j << std::endl;
//
//	j["answer"]["everything"] = 2;
//
//	std::cout << j.at("name") << std::endl;
//	std::cout << j["answer"]["everything"] << std::endl;
//
//	auto user = j["user"]["name"];
//	std::cout << "User: " << user << std::endl;
//
//	for (auto element : j) {
//		std::cout << element << '\n';
//	}
//
//	j["user"] = { {"name", "polo"}, {"active", false} };
//
//	std::ofstream o("polo.json");
//	o << std::setw(4) << j << std::endl;
//
//	std::ifstream i("polo.json");
//	json polo;
//	i >> polo;
//	std::cout << std::setw(4) << polo["user"] << std::endl;
//}


//-------------------------------------------------------------------------------------------------

//int main()
//{
//    double sum = 0;
//    int const n = 5;
//    double nums[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        nums[i] = (rand() % 100);
//    }
//
//    ofstream out("test", ios::out | ios::binary);
//
//    if (!out) {
//        cout << "���� ������� ����������\n";
//        return 1;
//    }
//
//    out.write((char*)nums, sizeof(nums));
//
//    out.close();
//
//    ifstream in("test", ios::in | ios::binary);
//
//    if (!in) {
//        cout << "���� ������� ����������";
//        return 1;
//    }
//
//    in.read((char*)&nums, sizeof(nums));
//
//    int k = sizeof(nums) / sizeof(double);
//    for (int i = 0; i < k; i++)
//    {
//        sum = sum + nums[i];
//        cout << nums[i] << ' ';
//    }
//    cout << "\nsum = " << sum << endl;
//    
//    in.close();
//}
