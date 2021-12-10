#include <iostream>
#include <exception>
#include <string>


using namespace std;


// todo: 

class Notebook {

public:                 // �������� �������� ��� ������ Notebook


    // ��� ��������
    enum Markup_T {   

        Checkered,          // � ������
        In_Line,            // � �����  
        Without_Markup,     // ��� ��������
        Another             // ������

    };

    enum Paper_M {          // �������� ������\������

        EAC,                // ����
        Not_EAC             // �� ����

    };


private:                // ���� ������

    Markup_T Markup_Type;                   // ��� ��������
    unsigned short Number_of_Sheets;        // ���-�� ������
    string Manufacturer;                    // �������������
    Paper_M Paper_Material;                 // �������� ������\������
    unsigned short Size_of_Page;            // ������ �������� (�5, ��������)   

public:                 // ������ ������

    Notebook();

    Notebook(Markup_T M_T, unsigned short N_o_S, string Man, Paper_M P_M, unsigned short Size);

    //Setters:

        // Set ��� ��������
    void Set_Markup_Type(Markup_T t);

    // Set ���-�� ������
    void Set_Number_of_Sheets(const unsigned short& n);

    // Set �������������
    void Set_Manufacturer(const string& m);

    // Set �������� ������\������
    void Set_Paper_material(Paper_M m);

    // Set ������ ��������
    void Set_Size_of_Page(const unsigned short& s);


    //Getters: 

    // Get ��� ��������
    Markup_T Get_Markup_Type() const;    

    // Get ���-�� ������
    unsigned short Get_Number_of_Sheets() const;

    // Get �������������
    string Get_Manufacturer() const;

    // Get �������� ������\������
    Paper_M Get_Paper_Material() const;

    // Get ������ ��������
    unsigned short Get_Size_of_Page() const;


    // Getters (string):

    // Get string ��� ��������
    string Get_string_Markup_Type() const;

    // Get string ���-�� ������
    string Get_string_Number_of_Sheets() const;

    // Get string �������� ������\������
    string Get_string_Paper_Material() const;

    // Get ������ ��������
    string Get_string_Size_of_Page() const;

    // Get string ���� ��� ���� ������� 
    string Get_Notebook_Information() const;

};