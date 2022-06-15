#pragma once
#include"Item.h"
//#include"PoP.h"

// Software

Software::Software(string aSoftware_Name, string aSoftware_Num, string aSoftware_Searial, int proc)
{
	Software_Name = aSoftware_Name;
	Software_Num = aSoftware_Num;
	Software_Searial = aSoftware_Searial;
}

void Software::print_Info() const
{
	cout << " < SoftWare Info > " << endl;
	cout << this->Software_Name << endl;
	cout << this->Software_Num << endl;
	cout << this->Software_Searial << endl << endl;
}

string& Software::return_software_name()
{
	return Software_Name;
}

string& Software::return_software_serial()
{
	return Software_Searial;
}

// Power

Power::Power(string aPower_Name, string aPower_Num, string aPower_Searial, int proc)
{
	Power_Name = aPower_Name;
	Power_Num = aPower_Num;
	Power_Searial = aPower_Searial;
}

void Power::print_Info() const
{
	cout << " < Power Info > " << endl;
	cout << this->Power_Name << endl;
	cout << this->Power_Num << endl;
	cout << this->Power_Searial << endl << endl;
}

string& Power::return_power_name()
{
	return Power_Name;
}
string& Power::return_power_serial()
{
	return Power_Searial;
}


// Case

Case::Case(string aCase_Name, string aCase_Num, string aCase_Searial, int proc)
{
	Case_Name = aCase_Name;
	Case_Num = aCase_Num;
	Case_Searial = aCase_Searial;
}

void Case::print_Info() const
{
	cout << " < Case Info > " << endl;
	cout << this->Case_Name << endl;
	cout << this->Case_Num << endl;
	cout << this->Case_Searial << endl << endl;
}

string& Case::return_case_name()
{
	return Case_Name;
}

string& Case::return_case_serial()
{
	return Case_Searial;
}

// SSD

SSD::SSD(string aSSD_Name, string aSSD_Num, string aSSD_Searial, int proc)
{
	SSD_Name = aSSD_Name;
	SSD_Num = aSSD_Num;
	SSD_Searial = aSSD_Searial;
}

void SSD::print_Info() const
{
	cout << " < SSD Info > " << endl;
	cout << this->SSD_Name << endl;
	cout << this->SSD_Num << endl;
	cout << this->SSD_Searial << endl << endl;
}

string& SSD::return_ssd_name()
{
	return SSD_Name;
}
string& SSD::return_ssd_serial()
{
	return SSD_Searial;
}
string& SSD::return_ssd_num()
{
	return SSD_Num;
}


// HDD

HDD::HDD(string aHDD_Name, string aHDD_Num, string aHDD_Searial, int proc)
{
	HDD_Name = aHDD_Name;
	HDD_Num = aHDD_Num;
	HDD_Searial = aHDD_Searial;
}

void HDD::print_Info() const
{
	cout << " < HDD Info > " << endl;
	cout << this->HDD_Name << endl;
	cout << this->HDD_Num << endl;
	cout << this->HDD_Searial << endl << endl;
}

string& HDD::return_hdd_name()
{
	return HDD_Name;
}

string& HDD::return_hdd_serial()
{
	return HDD_Searial;
}
// Memorry

Memorry::Memorry(string aMemorry_Name, string aMemorry_Num, string aMemorry_Searial, int proc)
{
	Memorry_Name = aMemorry_Name;
	Memorry_Num = aMemorry_Num;
	Memorry_Searial = aMemorry_Searial;
}

void Memorry::print_Info() const
{
	cout << " < Memorry Info > " << endl;
	cout << this->Memorry_Name << endl;
	cout << this->Memorry_Num << endl;
	cout << this->Memorry_Searial << endl << endl;
}

string& Memorry::return_memorry_name()
{
	return Memorry_Name;
}

string& Memorry::return_memorry_serial()
{
	return Memorry_Searial;
}

// MB

MB::MB(string aMB_Name, string aMB_Num, string aMB_Searial, int proc)
{
	MB_Name = aMB_Name;
	MB_Num = aMB_Num;
	MB_Searial = aMB_Searial;
}
void MB::print_Info() const
{
	cout << " < MB Info > " << endl;
	cout << this->MB_Name << endl;
	cout << this->MB_Num << endl;
	cout << this->MB_Searial << endl << endl;
}

string& MB::return_mb_name()
{
	return MB_Name;
}

string& MB::return_mb_serial()
{
	return MB_Searial;
}


// CPU

CPU::CPU(string aCPU_Name, string aCPU_Num, string aCPU_Searial, int proc)
{
	CPU_Name = aCPU_Name;
	CPU_Num = aCPU_Num;
	CPU_Searial = aCPU_Searial;
}
void CPU::print_Info() const
{
	cout << " < CPU Info > " << endl;
	cout << this->CPU_Name << endl;
	cout << this->CPU_Num << endl;
	cout << this->CPU_Searial << endl << endl;
}

string& CPU::return_cpu_name()
{
	return CPU_Name;
}

string& CPU::return_cpu_serial()
{
	return CPU_Searial;
}



// BOM

BOM::BOM() {}

BOM::BOM(string aProduct_name, string aProduct_Searial, CPU acpu, MB amb, Memorry aram, HDD ahdd, SSD assd, Power apow, Case apc_case, Software asoftware_os)
{
	// 멤버변수가 포인터 이므로 얘들이 가리킬 녀석을 임시로 만들어줘야함
	cpu = new CPU(acpu);
	mb = new MB(amb);
	ram = new Memorry(aram);
	hdd = new HDD(ahdd);
	ssd = new SSD(assd);
	pc_case = new Case(apc_case);
	pow = new Power(apow);
	software_os = new Software(asoftware_os);

	Product_name = aProduct_name;
	Product_Searial = aProduct_Searial;
}

void BOM::Print_produt() const
{
	// 각 클래스의 멤버는 private이므로 해당 클래스에서 함수로 접근해야 멤버의 값을 참조가능
	// 즉, print_cpu_Info();를 그냥 쓰면 '< SoftWare Info >' 여기까지 출력후 멤버내 값 조회가 불가능!
	cout << "   <BOM 구성제품>  " << endl;
	cpu->print_Info();
	mb->print_Info();
	ram->print_Info();
	hdd->print_Info();
	ssd->print_Info();
	pc_case->print_Info();
	pow->print_Info();
	software_os->print_Info();
}

string& BOM::return_Product_Searial()
{
	return Product_Searial;
}


string& BOM::return_bom_name()
{
	return Product_name;
}

string& BOM::return_bom_serial()
{
	return Product_Searial;
}

string& BOM::return_software_name()
{
	return software_os->return_software_name();
}

string& BOM::return_software_serial()
{
	return software_os->return_software_serial();
}

string& BOM::return_power_name()
{
	return pow->return_power_name();
}

string& BOM::return_power_serial()
{
	return pow->return_power_serial();
}

string& BOM::return_case_name()
{
	return pc_case->return_case_name();
}

string& BOM::return_case_serial()
{
	return pc_case->return_case_serial();
}

string& BOM::return_ssd_name()
{
	return ssd->return_ssd_name();
}

string& BOM::return_ssd_serial()
{
	return ssd->return_ssd_serial();
}

string& BOM::return_ssd_num()
{
	return ssd->return_ssd_num();
}

string& BOM::return_hdd_name()
{
	return hdd->return_hdd_name();
}

string& BOM::return_hdd_serial()
{
	return hdd->return_hdd_serial();
}

string& BOM::return_memorry_name()
{
	return ram->return_memorry_name();
}

string& BOM::return_memorry_serial()
{
	return ram->return_memorry_serial();
}

string& BOM::return_mb_name()
{
	return mb->return_mb_name();
}

string& BOM::return_mb_serial()
{
	return mb->return_mb_serial();
}

string& BOM::return_cpu_name()
{
	return cpu->return_cpu_name();
}

string& BOM::return_cpu_serial()
{
	return cpu->return_cpu_serial();
}
