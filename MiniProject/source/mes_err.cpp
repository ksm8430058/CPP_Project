#pragma once
#include"Item.h"
#include <vector>

class MES_ERR
{
private:
	string Err_sirial;

public:
	MES_ERR(string err_sirial) 
	{
		Err_sirial = err_sirial;
	}
	//handler에 넘겨줄 에러배열 리턴하는 함수
	string getMemSrial() { return Err_sirial; }

	virtual void Print_Error() const
	{
		cout << "Plan Sirial : " << Err_sirial << endl;
		cout << "제품 " << "에서" << "부품" << "가" << "이유로" << "되어야합니다." << endl;
	}
};

class MES
{
private:
	int Num_err = 0;
	MES_ERR* stub[100];

public:
	void make_product_plan()				// (Pop에서 시리얼번호 받아옴)
	{
		string sirial;


		//제품 받아와서 선택
		cout << "===========================오류 리스트=============================" << endl;
		///POP에서 받아와 에러 리스트 출력

		cout << "에러체크할 제품 Srial번호를 입력하세요 : "; cin >> sirial;

		stub[Num_err++] = new MES_ERR(sirial);

		//handler에 넘겨줄 에러리스트 배열 생성
	}

	void ShowAll_Err(void) const                  //모든 에러리스트 출력
	{
		vector<MES_ERR*> err;
		vector<MES_ERR*>::reverse_iterator iter;

		cout << "-------------------------" << endl;
		for (int i = 0; i < Num_err; i++)
		{
			err.push_back(stub[i]);
		}
		for (iter = err.rbegin(); iter != err.rend(); ++iter)
		{
			(*iter)->Print_Error();
		}
		/*for (int i = 0; i < Num_err; i++)
			stub[i]->Print_Error();*/
		cout << "-------------------------" << endl;
	}

	///////////////////////////////////////////////////////////bom코드, 생산계획코드, 개수 리턴
	~MES()                                   //소멸자
	{
		for (int i = 0; i < Num_err; i++)
			delete stub[i];
	}
};



