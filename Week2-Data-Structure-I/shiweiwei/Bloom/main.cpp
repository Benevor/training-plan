#include <iostream>
#include "BloomFilter.h"
#include "hash.h"
#include <string> 
using namespace std;

int main(){
    bloomfilter bloom;
    int a, number = 0;
    string s;
    cout << "----------------����-----------------" << endl;
    //����1000������
    for (int i = 0; i < 1000; i++) {
        s = to_string(i);
        bloom.add(s);
    }
    //��ѯһǧ�������ڵ���
    for (int i = 1000; i < 2000; i++) {
        s = to_string(i);
        if (bloom.isContain(s)) {
            number++;
        }
    }
    cout << "������" << number << endl;
    cout << "��ѡ�������1.���� 2.��ѯ �������˳�" << endl;
    cin >> a;
    while (a > 0 && a < 3) {
        if (a == 1) {
            cout << "������Ҫ������ַ���" << endl;
            cin >> s;
            bloom.add(s);
            cout << "����ɹ�" << endl;
        }
        else if (a == 2) {
            cout << "������Ҫ��ѯ���ַ���" << endl;
            cin >> s;
            if(bloom.isContain(s))
                cout << "��ѯ�ɹ�" << endl;
            else
                cout << "��ѯʧ��" << endl;
        }
        else {
            cout << "����������1��������2" << endl;
        }
        cout << "��ѡ�������1.���� 2.��ѯ �������˳�" << endl;
        cin >> a;
    }
}