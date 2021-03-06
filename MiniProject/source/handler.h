#ifndef __HANDLER_H__
#define __HANDLER_H__

#pragma once
#include"Item.h"
//#include"PoP.h"

class Plan
{
private:
	string Err_sirial;
	int Plan_date;
	int Amount;
	string BOM_Num;


public:
	Plan(const string plan_sirial, int plan_date, int Amount, string aBOM_Num) : Plan_date(plan_date), Amount(Amount),BOM_Num(aBOM_Num)
	{
		Err_sirial = plan_sirial;
	}
	//handler에 넘겨줄 생산계획 배열에 개수리턴하는 함수
	int getAmount() { return Amount; }
	string getMemSrial() { return Err_sirial; }
	string getBOM_Num() { return BOM_Num; }

	virtual void Print_Plan() const
	{
		cout << "-------------------------" << endl;
		cout << "Plan Sirial : " << Err_sirial << endl;
		cout << "Plan date : " << Plan_date << endl;
		cout << "Plan amount : " << Amount << endl;
		cout << "target BOM_Num : " << BOM_Num << endl;
		cout << "-------------------------" << endl;
	}
};

class POP {

private:
	BOM* aaa;

	string Plan_num;
	string Item_name;
	string Item_num;
	string Part_name;
	string Part_num;
	string Error;

public:
	POP() { }

	POP(BOM& temp)
	{
		aaa = new BOM(temp);
	}

	POP(string plan, string Iname, string Inum, string Pname, string Pnum, string err) {

		Plan_num = plan;
		Item_name = Iname;
		Item_num = Inum;
		Part_name = Pname;
		Part_num = Pnum;
		Error = err;
	}

	void setErr(string Msg) {

		Error = Msg;
	}

	void showpop() const {

		cout << aaa->return_bom_name() << endl;         //BOM이름 
		cout << aaa->return_bom_serial() << endl;       //BOM시리얼번호
		cout << aaa->return_power_name() << endl;       //power이름
		cout << aaa->return_power_serial() << endl;     //power시리얼번호

	}

	string getBOM_name() {

		return aaa->return_bom_name();
	}

	string getBOM_serial() {

		return aaa->return_bom_serial();
	}

	string getCPU_name() {

		return aaa->return_cpu_name();
	}

	string getCPU_serial() {

		return aaa->return_cpu_serial();
	}

	string getRAM_name() {

		return aaa->return_memorry_name();
	}

	string getRAM_serial() {

		return aaa->return_memorry_serial();
	}

	string getMB_name() {

		return aaa->return_mb_name();
	}

	string getMB_serial() {

		return aaa->return_mb_serial();
	}

	void ShowError() const {

		cout << "작업지시번호 : " << Plan_num << endl;
		cout << "품목명 : " << Item_name << endl;
		cout << "품목번호 : " << Item_num << endl;
		cout << "부품명 : " << Part_name << endl;
		cout << "부품번호 : " << Part_num << endl;
		cout << "오류사항 : " << Error << endl << endl;
	}
};


class Handler
{
private:
	int Num_Memproduct = 0;
	Plan* stub[100];
	
	CPU cpu[100];
	int cpu_count = 0;

	MB mb[100];
	int mb_count = 0;

	Memorry ram[100];
	int ram_count = 0;

	HDD hdd[100];
	int hdd_count = 0;

	SSD ssd[100];
	int ssd_count = 0;

	Power pow[100];
	int pow_count = 0;

	Case case1[100];
	int case1_count = 0;

	Software os[100];
	int os_count = 0;

	BOM *temp[100];
	int Num_product = 0;

    BOM temp1[100];
    int Num_product1 = 0;

	POP* pop[100];
	int pop_count = 0;

	POP* Error[100];
	int pop_number = 0;

	string Err_msg;
	int Err_part;
public:
	Handler(void);

	// 샘플데이터입력
	void Init_Sample_ItemInfo(void);

	// 메인메뉴
	void Menu_Main(void);

	// BOM
	void Menu_BOM();
	void Add_BOM();
	void Delete_BOM();
	void Show_BOM();
	void Show_BOM_Searial();

	// 생산계획
	void Menu_ManufacturePlanning();
	void Add_ManufacturePlanning();
	void Delete_ManufacturePlanning();
	void Show_ManufacturePlanning();

	// 공정
	int manufature();

	// 불량정보
	//void Add_err();
	//void Show_NGInfo(int select_sequence);
	void Show_NGInfo();
	void Add_NGInfo();
	void AddError();

	//-------대분류 시작 ------//
	void AddError_1();

	//-------중분류 시작 -----//
	void AddError_2_1();
	void AddError_2_2();

	//-------소분류 시작 ---//
	void AddError_3_1_1();
	void AddError_3_1_2();
	void AddError_3_1_3();
};

#endif 
