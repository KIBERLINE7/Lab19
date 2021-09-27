#include<iostream>
#include<vector>

using namespace std;

void zd1() {

	int n;

	cout << "Enter size array : ";

	cin >> n;

	vector<int> A(n);

	cout << "Enter elements array A : ";

	for (int i = 0; i < n; i++)
		cin >> A[i];

	for (int i = 1; i < A.size(); i++) {

		if (A[i] == A[i - 1]) {

			A.erase(A.begin() + i);
			i--;

		}

	}

	cout << "Complete" << endl;

	string s;

	cout << "Display array A ? Y/N ";

	cin >> s;

	if (s == "Y") {

		for (int i = 0; i < A.size(); i++)
			cout << A[i] << " ";

	}
	else {
		cout << "OK";
	}

	return;

}

void zd2() {

	int n;

	cout << "Enter size array : ";

	cin >> n;

	vector<int> A(n);

	vector<pair<int, int> > B;

	cout << "Enter elements array A : ";

	for (int i = 0; i < n; i++)
		cin >> A[i];

	for (int i = 0; i < A.size(); i++) {

		int cnt = 0;

		if (B.size() == 0) {

			for (int j = i + 1; j < A.size(); j++) {
				if (A[i] == A[j])
					cnt++;
			}

			B.push_back(make_pair(A[i], cnt + 1));

		}
		else {

			bool flag = true;

			for (int j = 0; j < B.size(); j++) {

				if (A[i] == B[j].first) {
					flag = false;
					break;
				}

			}

			if (flag) {

				for (int j = i + 1; j < A.size(); j++) {
					if (A[i] == A[j])
						cnt++;
				}

				B.push_back(make_pair(A[i], cnt + 1));

			}

		}

	}

	for (int i = 0; i < A.size(); i++) {

		bool fl = false;

		for (int j = 0; j < B.size(); j++) {

			if (A[i] == B[j].first && B[j].second == 2) {

				fl = true;
				break;

			}

		}

		if (fl) {

			for (int j = i + 1; j < A.size(); j++) {

				if (A[i] == A[j]) {

					A.erase(A.begin() + j);
					A.erase(A.begin() + i);

					i--;
					break;
				}

			}

		}

	}

	cout << "Array size : " << A.size() << endl;

	cout << "Array A : ";

	for (int i = 0; i < A.size(); i++)
		cout << A[i] << " ";

	return;

}

void zd3() {

	int n;

	cout << "Enter size array : ";

	cin >> n;

	vector<int> A(n);

	cout << "Enter elements array A : ";

	for (int i = 0; i < n; i++)
		cin >> A[i];

	int max = -1e8, min = 1e8 , max_pos = -1 , min_pos = -1;

	for (int i = 0; i < A.size(); i++) {

		if (A[i] >= max) {
			max = A[i];
			max_pos = i;
		}

		if (A[i] <= min) {
			min = A[i];
			min_pos = i;
		}
	}

	A.insert(A.begin() + min_pos, 0);

	if (min_pos > max_pos) {
		A.insert(A.begin() + max_pos + 1 , 0);
	}
	else {
		
		A.insert(A.begin() + max_pos + 2, 0);

	}

	cout << "Complete" << endl;

	string s;

	cout << "Display array A ? Y/N ";

	cin >> s;

	if (s == "Y") {

		for (int i = 0; i < A.size(); i++)
			cout << A[i] << " ";

	}
	else {
		cout << "OK";
	}

	return;

}

void zd4() {

	int n;

	cout << "Enter size array : ";

	cin >> n;

	vector<int> A(n , 0);

	cout << "Enter elements array A : ";

	for (int i = 0; i < A.size(); i++) {
		cin >> A[i];

		if (A[i] < 0) {
			A.insert(A.begin() + i + 1, 0);
			i++;
		}

	}
		

	cout << "Complete" << endl;

	string s;

	cout << "Display array A ? Y/N ";

	cin >> s;

	if (s == "Y") {

		for (int i = 0; i < A.size(); i++)
			cout << A[i] << " ";

	}
	else {
		cout << "OK";
	}

	return;

}

void zd5() {

	int n;

	cout << "Enter size array : ";

	cin >> n;

	vector<int> A(n, 0);

	cout << "Enter elements array A : ";

	for (int i = 0; i < A.size(); i++) {
		cin >> A[i];

		if (A[i] > 0) {
			A.insert(A.begin() + i, 0);
			i++;
		}

	}


	cout << "Complete" << endl;

	string s;

	cout << "Display array A ? Y/N ";

	cin >> s;

	if (s == "Y") {

		for (int i = 0; i < A.size(); i++)
			cout << A[i] << " ";

	}
	else {
		cout << "OK";
	}

	return;

}

int main() {

	int t;

	cout << "Enter the job number : ";

	cin >> t;

	switch (t)
	{
	case 1:
		zd1();
		break;

	case 2:
		zd2();
		break;

	case 3:
		zd3();
		break;

	case 4:
		zd4();
		break;

	case 5:
		zd5();
		break;

	default:
		break;
	}

	return 0;

}