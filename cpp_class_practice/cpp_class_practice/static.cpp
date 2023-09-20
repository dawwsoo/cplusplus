//���� ��� (1)

/*Ŭ������ ���ԵǴ� ������� �����̰ų� �����̰ų� ��� ����
���ݱ��� �ٷ� ���� ������� _��ü��� �����ص� �ȴ� �ڷ������� �־�����
��������� �ؾ Ʋ�� �ش�Ǵ� ���
�������� �� ǥ���� Ŭ���� ������ ����ְ� ������ ��� ����*/

#include<iostream>
using namespace std;

//0~1���� ���� ���� float R G B �� ������ ����

//int idCounter = 1; //�������� ����_ ��ü��������� �������� ����� �ִ��� �����ؾ� �Ѵ�.�׸��� class�� �����ִ� ���� �̹Ƿ�,

class Color {
public:
	Color() :r(0), g(0), b(0), id(idCounter++) { }//{id = idCounter++;} �̷��� �ص� ������

	Color(float r, float g, float b) :r(r), g(g), b(b), id(idCounter++) {}// �Ű������� ȸ�� ��������� ���

	//���� �ٲٴ� ��찡 �´ٸ� ���ο� �Լ��� ����ڴ��ؼ� set�� �н��Ұ�
	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	int GetId() {
		return id;
	}
	
	static int idCounter;//�������� ����� ���� Ŭ���� �ȿ��� ���� ������ �� �� ����, �ʱⰪ�� �ַ��� class ������ �������Ѵ�.class �̸� ��ü�� namespaceó�� �۵��Ѵ�.
	//���� ū ���� : ���������� ������� �ʾҴٴ� ��

	static Color MixColors(Color a, Color b) { //��ü�� ���õȰ� �ƴ϶� Ŭ������ ���õ� �Ŷ� �ʱ�ȭ ���Ŀ� ���� ����
		return  Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}

private:
	float r;
	float g;
	float b;

	int id; //������� ������ ��ȣ�� �ű���� ��

	};

int Color::idCounter = 1; //namespace���� ����� ���Ǹ� �и���ų�� ����� ����� ����.
	/*
	Color MixColors(Color a, Color b) {
		return  Color((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	���� class Color �� �ʹ� �������ݾ� �׷��� class�ȿ� �������� �� �׶� static ���_ ���� private field�� ���� �����ϴ� get�� ������� �ʾƵ� ��

		//Color res((a.GetR() + b.GetR()) / 2, (a.GetG() + b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
		//return res;

		//int a = 5;
		//return a;
		//== return 5; (�� �� ó�� ���� ������ ���� �׳� ��������)

	}*/

	int main() {
		Color red(1, 0, 0);
		Color blue(0, 0, 1);

		//Color purple = MixColors(blue, red);


		Color purple = Color::MixColors(blue, red); //static ȣ�� �ÿ��� namespace ó�� �ݷ� �� �� ���
		cout << " r= " << purple.GetR() << " g= " << purple.GetG() << " b= " << purple.GetB() << endl;

		cout << "red.GetId() = " << red.GetId() << endl;
		cout << "blue.GetId() = " << blue.GetId() << endl;
		cout << "purple.GetId() = " << purple.GetId() << endl;

	}

