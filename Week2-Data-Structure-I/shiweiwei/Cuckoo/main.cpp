#include <iostream>
#include "CuckooFilter.h"
#include <string>
using namespace std;

int main() {
    cuckoofilter cuckoo;
    int a, number = 0;
    string s;
    cout << "---------------------����-------------------" << endl;
    //����4000������
    for (int i = 0; i < 4000; i++) {
        s = to_string(i);
        cuckoo.add(s);
    }
    //��ѯ��ǧ�������ڵ���
    for (int i = 4000; i < 8000; i++) {
        s = to_string(i);
        if (cuckoo.isContain(s)) {
            number++;
        }
    }
    cout << "������" << number << endl;
    cout << "��ѡ�������1.���� 2.��ѯ 3.ɾ�� �������˳�" << endl;
    cin >> a;
    while (a > 0 && a < 4) {
        if (a == 1) {
            cout << "������Ҫ������ַ���" << endl;
            cin >> s;
            if (cuckoo.add(s))
                cout << "����ɹ�" << endl;
            else
                cout << "����ʧ��" << endl;
        }
        else if (a == 2) {
            cout << "������Ҫ��ѯ���ַ���" << endl;
            cin >> s;
            if (cuckoo.isContain(s))
                cout << "��ѯ�ɹ�" << endl;
            else
                cout << "��ѯʧ��" << endl;
        }
        else if (a == 3) {
            cout << "������Ҫɾ�����ַ���" << endl;
            cin >> s;
            if (cuckoo.Delete(s))
                cout << "ɾ���ɹ�" << endl;
            else
                cout << "ɾ��ʧ��" << endl;
        }
        else {
            cout << "����������1��2��3" << endl;
        }
        cout << "��ѡ�������1.���� 2.��ѯ 3.ɾ�� �������˳�" << endl;
        cin >> a;
    }
}