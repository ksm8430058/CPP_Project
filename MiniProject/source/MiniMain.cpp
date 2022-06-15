#pragma once
#include"Item.h"
#include"handler.h"
//#include"PoP.h"

static int Num_product = 0;

int main(void)
{
	int err_num[100] = { 1 };
	int num_err_list = 0;
	int Select_main = 0;
	Handler manager;
	// product2* stub[100];


	// 샘플데이터 삽입
	manager.Init_Sample_ItemInfo();


	while (1)
	{
		
		manager.Menu_Main();
		cout << "선택 : ";
		cin >> Select_main;
		cout << endl;

		if (Select_main == 1)		// 1.1 BOM
		{
			manager.Menu_BOM();
		}

		else if (Select_main == 2)	// 1.2 생산계획
		{
			manager.Menu_ManufacturePlanning();
		}

		else if (Select_main == 3)	// 1.3 공정
		{
			err_num[num_err_list++]=manager.manufature();
		}

		else if (Select_main == 4)	// 1.4 불량확인
		{

			manager.Show_NGInfo();
			/*cout << endl << "< 오류 정보 >" << endl << endl;
			for(int i = 0;i < num_err_list;i++)
				manager.Show_NGInfo(err_num[i]);
			system("pause");*/
		}

		else if (Select_main == 5)	// 1.5 에러등록
		{
			manager.Add_NGInfo();
		}

		else if (Select_main == 6)	// 1.6 종료
		{
			exit(1);
		}

		else
		{
			while (getchar() != '\n');
			cout << "잘못된 입력값입니다." << endl;
		}
	}
	return 0;
}


