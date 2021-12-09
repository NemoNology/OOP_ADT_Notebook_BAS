#include <iostream>
#include <exception>
#include <string>

// � - ��������� ���������� ���������.
// ���� �� ������������� - ��, ��� ��� ����� ����� � �����������
// OOP_ADT_Notebook_BAS � github.com ������������
// NemoNology - ����!
// � � �� �����, ��� ���-��, ����� ����, ������ ��� �������...




using namespace std;





// todo: ������� �����
class Notebook {

public:                 // �������� �������� ��� ������ Notebook


    
    enum class Markup_T {         // ��� ��������

        Checkered,          // � ������
        In_Line,            // � �����  
        Without_Markup,     // ��� ��������
        Another             // ������

    };

    enum class Paper_M {          // �������� ������\������

        EAC,                // ����
        Another             // �� ����

    };


private:                // ���� ������

    Markup_T Markup_Type;                   // ��� ��������
    unsigned short Number_of_Sheets;        // ���-�� ������
    string Manufacturer;                    // �������������
    Paper_M Paper_Material;                 // �������� ������\������
    unsigned short Size_of_Page;            // ������ �������� (�5, ��������)   

public:                 // ������ ������

    Notebook() {                            // �����������

        Markup_Type = Markup_T::Without_Markup;
        Number_of_Sheets = 0;
        Manufacturer = "Unknown";
        Paper_Material = Paper_M::EAC;
        Size_of_Page = 5;

    };

//Setters:

    // Set ��� ��������
    void Set_Markup_Type(Markup_T t) {

        this->Markup_Type = t;

    };

    // Set ���-�� ������
    void Set_Number_of_Sheets(const unsigned short &n) {

        if (n == 0) {

            throw invalid_argument("������� ��������...");  // �������� �����

        }
        else
        {

            this->Number_of_Sheets = n;

        }
        
    }

    // Set �������������
    void Set_Manufacturer(const string &m) {

        // ��� ����� ������, �� ������ 
        if (m == "") {

            throw invalid_argument("�����...");             // �������� �����

        }
        else {

            this->Manufacturer = m;

        }
    }

    // Set �������� ������\������
    void Set_Paper_material(Paper_M m) {

        this->Paper_Material = m;

    }

    // Set ������ ��������
    void Set_Size_of_Page(const unsigned short &s) {

        if (s == 0) {

            throw invalid_argument("������� ������?..");    // �������� �����

        }
        else {

            this->Size_of_Page = s;

        }
    }


//Getters: 
     
    // Get ��� ��������
    Markup_T Get_Markup_Type() {

        return this->Markup_Type;

    };

    // Get ���-�� ������
    unsigned short Get_Number_of_Sheets() {

        return this->Number_of_Sheets;

    };

    // Get �������������
    string Get_Manufacturer() {

        return this->Manufacturer;

    };

    // Get �������� ������\������
    Paper_M Get_Paper_Material() {

        return this->Paper_Material;

    };

    // Get ������ ��������
    unsigned short Get_Size_of_Page() {

        return this->Size_of_Page;

    };


// Getters (string):

    // Get string ��� ��������
    string Get_string_Markup_Type() {


        switch (this->Markup_Type)
        {
        case Notebook::Markup_T::Checkered:
            return "� ������";
            break;
        case Notebook::Markup_T::In_Line:
            return "� �����";
            break;
        case Notebook::Markup_T::Without_Markup:
            return "��� ��������";
            break;
        case Notebook::Markup_T::Another:
            return "������";            // todo: 0.1) ����� �� "������", � ���������?..
            break;
        default:
            break;
        }


    }

    // Get string ���-�� ������
    string Get_string_Number_of_Sheets() { 

        return to_string(this->Number_of_Sheets) + " ������";

    };

    // Get string �������� ������\������
    string Get_string_Paper_Material() {

        switch (this->Paper_Material)
        {
        case Notebook::Paper_M::EAC:
            return "����";
            break;
        case Notebook::Paper_M::Another:
            return "������";            // todo: 0.1)
            break;
        }
                    

    };

    // Get ������ ��������
    string Get_string_Size_of_Page() {

        return "A" + to_string(this->Size_of_Page);

    };

    // Get string ���� ��� ���� ������� 
    string Get_Notebook_Information() {

        return "\n" + this->Get_string_Markup_Type() + "\t" + this->Get_string_Number_of_Sheets() +
            "\t" + this->Get_Manufacturer() + "\t" + this->Get_string_Paper_Material() + "\t" +
            this->Get_string_Size_of_Page();

    }


};