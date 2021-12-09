#include <iostream>
#include <exception>
#include <string>


using namespace std;



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

    Notebook();

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
    Markup_T Get_Markup_Type();

    // Get ���-�� ������
    unsigned short Get_Number_of_Sheets();

    // Get �������������
    string Get_Manufacturer();

    // Get �������� ������\������
    Paper_M Get_Paper_Material();

    // Get ������ ��������
    unsigned short Get_Size_of_Page();


    // Getters (string):

        // Get string ��� ��������
    string Get_string_Markup_Type();

    // Get string ���-�� ������
    string Get_string_Number_of_Sheets();

    // Get string �������� ������\������
    string Get_string_Paper_Material();

    // Get ������ ��������
    string Get_string_Size_of_Page();

    // Get string ���� ��� ���� ������� 
    string Get_Notebook_Information();

    // ����� ������������������ �����...
    // Get_new_commit();

    // New commented method 2
    // Get_new_commit_in_new_branch();

};