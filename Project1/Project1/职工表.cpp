#include"first.h"
#include"worker.h"
int main()
{
	first PH;
	/*while (1)
	{*/
		PH.dumessage();
		PH.showmune();
		cout << "ѡ��";
		int select;
		cin >> select;
  
		switch (select)
		{
		case 0:

			PH.exitsystem();
			break;
		case 1:

			PH.addemp();
			break;

		case 2:

			PH.showmessage();
			break;
		case 3:

			cout << "ɾ��ְ����id�ţ�";
			int id;
			cin >> id;
			PH.Deletemessage(id);
			break;
		case 4:

			cout << "�޸�ְ����id��:";
			int ID;
			cin >> ID;
			PH.amend(ID);
			break;
		case 5:

			cout << "������Ҫ���ҵ�ְ��ID:";
			int Id;
			cin >> Id;
			PH.cheatmessage(Id);
			break;
		case 6:

			cout << "1������" << endl;
			cout << "2������" << endl;
			cout << "ѡ�������ǽ���";
			int select;
			cin>>select;
			PH.sort(select);
			break;
		case 7:

			PH.decidefile();
			break;
		default:
			system("pause");
			system("cls");
			break;
		}
		system("pause");
		system("cls");

	//}

  }