#include"first.h"
#include"worker.h"
int main()
{
	first PH;
	/*while (1)
	{*/
		PH.dumessage();
		PH.showmune();
		cout << "选择：";
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

			cout << "删除职工的id号：";
			int id;
			cin >> id;
			PH.Deletemessage(id);
			break;
		case 4:

			cout << "修改职工的id号:";
			int ID;
			cin >> ID;
			PH.amend(ID);
			break;
		case 5:

			cout << "输入需要查找的职工ID:";
			int Id;
			cin >> Id;
			PH.cheatmessage(Id);
			break;
		case 6:

			cout << "1，升序" << endl;
			cout << "2，降序" << endl;
			cout << "选择升序还是降序：";
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