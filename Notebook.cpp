#include <iostream>
#include <exception>
#include <string>
#include "Notebook.h"



using namespace std;



// todo: ������� �����


// todo: �� 2 �� ������������?..
Notebook::Notebook() {                            // ������������

    Markup_Type = Markup_T::Without_Markup;
    Number_of_Sheets = 0;
    Manufacturer = "Unknown";
    Paper_Material = Paper_M::EAC;
    Size_of_Page = 5;

};


Notebook::Notebook(Markup_T M_T, unsigned short N_o_S, string Man, Paper_M P_M, unsigned short Size) {

    Markup_Type = M_T;
    Number_of_Sheets = N_o_S;
    Manufacturer = Man;
    Paper_Material = P_M;
    Size_of_Page = Size;

}



// ������ ��� ����������� ������ � ���������� ������
string Paper_Materials[sizeof(Notebook::Paper_M)] = { "����", "������" };


string Markup_Types[sizeof(Notebook::Markup_T)] = { "� ������", "� �����", "��� ��������", "������" };




//Setters:

// Set ��� ��������
void Notebook::Set_Markup_Type(Markup_T t) {

    this->Markup_Type = t;

}

// Set ���-�� ������
void Notebook::Set_Number_of_Sheets(const unsigned short &n) {

    if (n == 0) {

        throw invalid_argument("������� ��������...");  // �������� �����

    }
    else
    {

        this->Number_of_Sheets = n;

    }
        
}

// Set �������������
void Notebook::Set_Manufacturer(const string &m) {

    // ��� ����� ������, �� ������ 
    if (m == "") {

        throw invalid_argument("�����...");             // �������� �����

    }
    else {

        this->Manufacturer = m;

    }
}

// Set �������� ������\������
void Notebook::Set_Paper_material(Paper_M m) {

    this->Paper_Material = m;

}

// Set ������ ��������
void Notebook::Set_Size_of_Page(const unsigned short &s) {

    if (s == 0) {

        throw invalid_argument("������� ������?..");    // �������� �����

    }
    else {

        this->Size_of_Page = s;

    }
}


//Getters: 
     
// Get ��� ��������
Notebook::Markup_T Notebook::Get_Markup_Type() const {

    return this->Markup_Type;

}

// Get ���-�� ������
unsigned short Notebook::Get_Number_of_Sheets() const {

    return this->Number_of_Sheets;

}

// Get �������������
string Notebook::Get_Manufacturer() const {

    return this->Manufacturer;

}

// Get �������� ������\������
Notebook::Paper_M Notebook::Get_Paper_Material() const {

    return this->Paper_Material;

}

// Get ������ ��������
unsigned short Notebook::Get_Size_of_Page() const {

    return this->Size_of_Page;

}


// Getters (string):

// Get string ��� ��������
string Notebook::Get_string_Markup_Type() const {


    return Markup_Types[this->Markup_Type];


}

// Get string ���-�� ������
string Notebook::Get_string_Number_of_Sheets() const {

    return to_string(this->Number_of_Sheets) + " ������";

}



// Get string �������� ������\������
string Notebook::Get_string_Paper_Material() const {

    return Paper_Materials[this->Paper_Material];

}
                    
    

// Get ������ ��������
string Notebook::Get_string_Size_of_Page() const {

    return "A" + to_string(this->Size_of_Page);

}

// Get string ���� ��� ���� ������� 
string Notebook::Get_Notebook_Information() const {

    return "\n" + this->Get_string_Markup_Type() + "\t" + this->Get_string_Number_of_Sheets() +
        "\t" + this->Get_Manufacturer() + "\t" + this->Get_string_Paper_Material() + "\t" +
        this->Get_string_Size_of_Page();

}