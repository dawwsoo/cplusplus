����� ��
int solution(int n) {
    int answer = 0;
    vector<int> set1;
    set1.clear();
    int sum = 0;
    int k = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
        {
            sum = sum + i;
            set1.insert(set1.begin() + k, i);
            k++;

        }
    }
    //std::cout << "k:" << k << endl << "sum: " << sum<<endl;

    cout << n << "�� ����� ";
    //copy(set1.begin(), set1.end()-1, ostream_iterator<int>(cout, ", "));
    for (int i = 0; i < set1.size() - 1; i++)
        cout << set1[i] << " ,";
    cout << n << "�Դϴ�." << "�̸� ��� ���ϸ� " << sum << "�Դϴ�.";


    return answer;
}
int main() {

    solution(12);
}
