//#include<iostream>
//#include<random>
//#include<vector>
//#include<ctime>
///*���� ����
//* ������Ʈ 3. ���� ���� ���߱�
//1) ��ǻ�Ͱ� 1~25������ �� �� �������� 6���� �� ���� (�ߺ� x)
//2) ����ڵ� 1~25������ �� �� ���ϴ� ���� 6�� �Է� (�ߺ� x)
//3) �� �迭�� ���ؼ� �� ������ ����ϱ�!
//3-1) �� ���� ������ ���ϸ� 7��, 1���� ���߸� 6��, 2�� ���߸� 5��...
//3-2) 6���� ��� ���߸� 1��
//
//��ǻ�Ϳ� ����ڿ� ���� ����� ���� ���� ������ ���� ��ǻ�� ���� �ȿ� ����� ���� �ִ��� ���� üũ
//
//*/
//
////bool tf = (find(user.begin(), user.end(), a) == user.end()); 
////find(user.begin(), user.end(), a) != user.end() �Լ��� �Ẹ��
//
//using namespace std;
//
//int main() {
//	int a = 0;
//	int count = 0;
//	int have = 0;
//	vector<int> computer ;
//	vector<int> user ;
//	computer.clear();
//	user.clear();
//
//	//a�� 25 ���� ����
//	//true �� ���°�
//
//	int i = 0;
//	while (i < 6) {
//		
//		int ran = rand();
//		int random = ran % 25 + 1;
//		if (find(computer.begin(), computer.end(), a) != computer.end()) //��ġ�� �ʾ�
//			continue;
//			
//		else {
//			computer.push_back(random);
//			i++;
//
//		}
//	}
//	
//
//	
//	cout << "���ڴ� 1-25���� �Է� �����մϴ�. " << endl;
//	while (count < 6) {
//
//		cout << (count + 1) << "��° ��ȣ�� �Է��ϼ��� : ";
//		cin >> a;
//		if (a > 25 || a < 1) {
//			cout << "1~25 ������ ���� �Է����ּ��� . "<<endl;
//			continue;
//		}
//		else if (find(user.begin(), user.end(), a) != user.end())
//		{
//			cout << "�̹� �ִ� ��ȣ�Դϴ�. "<<endl;
//			continue;
//		}
//		else {
//			user.push_back(a);
//			count++;
//
//			if (find(computer.begin(), computer.end(), a) != computer.end())//���⼭ �ٷ� Ȯ��
//				have++;
//
//		}
//	}
//
//
//		cout << "--------------------------\n��÷ ��ȣ Ȯ�� !\n " ;
//		for (auto k : computer) {
//			cout << k<<" ";
//		}
//		int grade = 7 - have;
//		cout << "\n��� : ����� ����� " << grade << "�� �Դϴ�.";
//			
//
//
//
//	
//
//}