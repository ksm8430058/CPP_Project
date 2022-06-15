#include "handler.h"

void Handler::AddError()         //반환번호 작동 메뉴 (오류 yes or no)
{
 
    int sel;      //번호선택

    cout << "오류가 발생하셨습니까?" << endl;
    cout << "(1)OK" << endl;
    cout << "(2)NO" << endl;
    cin >> sel;

    switch (sel)
    {
    case 1:
    {
        AddError_1();
        
        break;
    }
    case 2:
    {
        cout << "오류가 발생하지 않았습니다." << endl;
        system("puase");
        break;
    }
    }
}


//-------대분류 시작 ------//
void Handler::AddError_1()   // 반환번호 작동 메뉴
{
    int sel;

    cout << "어떠한 오류가 발생하셨습니까?" << endl;

    string a = "부품불량";
    string b = "조립불량";

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:

        AddError_2_1();
        break;

    case 2:
        AddError_2_2();
        break;
    }
}

//-------중분류 시작 -----//
void Handler::AddError_2_1()   //값을 반환하기 위한 메뉴
{
    int sel;

    cout << "-------부품불량이 발생하였습니다.------" << endl;
    cout << "어떠한 부품에 불량이 발생하였습니까?" << endl;

    string a = "CPU";
    string b = "RAM";
    string c = "메인보드";

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        Err_part = 1;
        AddError_3_1_1(); 
        break;
    case 2:
        Err_part = 2;
        AddError_3_1_2();
        break;
    case 3:
        Err_part = 3;
        AddError_3_1_3();                        
        break;
    }

}
void Handler::AddError_2_2()
{
    int sel;
    

    cout << "------조립불량이 발생하였습니다----" << endl;
    cout << "어떠한 부품에 불량이 발생하였습니까?" << endl;

    string a = "CPU";
    string b = "RAM";
    string c = "메인보드";

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        //AddError_3_2_1();
                        
        break;
    case 2:
        //AddError_3_2_2();
                       
        break;
    case 3:
        //AddError_3_2_3();
                        
        break;
    }

}

//----소분류 시작 ---//
void Handler::AddError_3_1_1()
{
    int sel;

    cout << "-----부품불량이 발생하였습니다 ----" << endl;

    string a = "크기불량";
    string b = "부품파손";
    string c = "부품손상";

    cout << "어떠한 불량이 발생하였습니까?" << endl;

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        Err_msg = a;
        break;
    case 2:
        Err_msg = b;
        break;
    case 3:
        Err_msg = c;
        break;
    }
}

void Handler::AddError_3_1_2()
{
    int sel;

    cout << "-----부품불량이 발생하였습니다 ----" << endl;

    string a = "크기불량";
    string b = "부품파손";
    string c = "부품손상";

    cout << "어떠한 불량이 발생하였습니까?" << endl;

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        Err_msg = a;
        break;
    case 2:
        Err_msg = b;
        break;
    case 3:
        Err_msg = c;
        break;
    }

}

void Handler::AddError_3_1_3()
{
    int sel;
    cout << "-----부품불량이 발생하였습니다 ----" << endl;

    string a = "크기불량";
    string b = "부품파손";
    string c = "부품손상";

    cout << "어떠한 불량이 발생하였습니까?" << endl;

    cout << "(1)" << a << endl;
    cout << "(2)" << b << endl;
    cout << "(3)" << c << endl;

    cin >> sel;

    switch (sel)
    {
    case 1:
        Err_msg = a;
        break;
    case 2:
        Err_msg = b;
        break;
    case 3:
        Err_msg = c;
        break;
    }

}