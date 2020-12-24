#include "MyForm.h"


using namespace Curs;
void Curs::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
    System::Diagnostics::Debug::Write(8797);
    if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        String^ text1 = folderBrowserDialog1->SelectedPath;
        label5->Text = text1;
        groupBox3->Visible = true;
    }
}
void Curs::MyForm::numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

    if (numericUpDown2->Value != 0) {
        button4->Visible = true;
    }
    if (numericUpDown2->Value == 0) {
        button4->Visible = false;
    }
}
void Curs::MyForm::numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

}
void Curs::MyForm::comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

    String^ text1;
    text1 = comboBox1->Text;
    setlocale(LC_ALL, "Russian");
    int a2;
    if (text1 == "Байт") {
        a2 = 0;
    }
    if (text1 == "КБ") {
        a2 = 1;
    }
    if (text1 == "МБ") {
        a2 = 2;
    }
    if (text1 == "ГБ") {
        a2 = 3;
    }
}
void Curs::MyForm::sort(std::vector < std::string >& v1, std::vector < long long >& v2) {
    for (int i = 0; i < v2.size() - 1; i++) {
        for (int j = i + 1; j < v2.size(); j++) {
            if (v2[i] < v2[j]) {
                swap(v1[i], v1[j]);
                long long k = v2[i];
                v2[i] = v2[j];
                v2[j] = k;
            }
        }
    }
}
void Curs::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    listView2->Visible = true;
    int k2 = Convert::ToInt32(numericUpDown2->Value);
    listView2->Items->Clear();
    listView2->Visible = true;
    setlocale(LC_ALL, "Russian");
    String^ text1;
    text1 = label5->Text;
    std::wstring abc = marshal_as < std::wstring >(text1);
    std::string s2(abc.begin(), abc.end());

    std::vector < std::string > files;
    std::vector < long long > siz;
    bool withVl;
    if (radioButton7->Checked) {
        withVl = true;

    }
    else {
        withVl = false;
    }
    GetFilesR2(files, s2.c_str(), siz, withVl);
    if (files.size() != 0) {
        sort(files, siz);
    }

    int min;
    if (k2 < files.size()) {
        min = k2;
    }
    else {
        min = files.size();
    }

    std::ifstream file;
    file.open("Tab2.txt");
    if (!file) {
        std::ofstream fout("Tab2.txt");
        fout.close();
    }
    std::ofstream out("Tab2.txt", std::ios::app);

    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    out << "Запуск от: " << asctime(timeinfo) << std::endl;
    out << "Найденные файлы и их размер в КБ: " << std::endl;
    ListViewItem^ item1;
    if (files.size() != 0) {
        for (int i = 0; i < min; i++) {
            String^ str2 = gcnew String(files[i].c_str());
            std::string sx = std::to_string(siz[i] / 1024);
            String^ str23 = gcnew String(sx.c_str());
            System::String^ str = gcnew System::String(str2);
            listBox2->Items->Add(str);

            item1 = gcnew ListViewItem(str, 0);
            listView2->Items->Add(item1);

            item1->SubItems->Add(str23);
            std::string unmanaged = msclr::interop::marshal_as < std::string >(str);
            std::string unmanaged1 = msclr::interop::marshal_as < std::string >(str23);
            out << unmanaged << "     " << unmanaged1 << std::endl;
        }
    }
    out << "------------------------------------------------------" << std::endl;
}
void Curs::MyForm::GetFilesR2(std::vector < std::string >& result,
    const char* path, std::vector < long long >& siz, bool withVl) {
    int k2 = Convert::ToInt32(numericUpDown2->Value);
    HANDLE hFind;
    WIN32_FIND_DATA data;
    std::string folder(path);
    folder += "\\";
    std::string mask(folder);
    mask += "*.*";

    hFind = FindFirstFile(mask.c_str(), &data);
    String^ text1;
    text1 = comboBox1->Text;
    int a2;
    if (text1 == "Байт") {
        a2 = 0;
    }
    if (text1 == "КБ") {
        a2 = 1;
    }
    if (text1 == "МБ") {
        a2 = 2;
    }
    if (text1 == "ГБ") {
        a2 = 3;
    }
    int r2 = Convert::ToInt32(numericUpDown1->Value);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            std::string name(folder);
            name += data.cFileName;
            if (data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
                if (withVl) {
                    if (strcmp(data.cFileName, ".") != 0 && strcmp(data.cFileName, "..") != 0) {
                        GetFilesR2(result, name.c_str(), siz, withVl);
                    }
                }
            }
            else {
                struct stat fi;
                const char* c = name.c_str();
                stat(c, &fi);
                int a = fi.st_size;
                if (a2 == 0) {
                    if (fi.st_size > r2) {
                        result.push_back(name);
                        siz.push_back(a);
                    }
                }
                if (a2 == 1) {
                    if (fi.st_size > r2 * 1024) {
                        result.push_back(name);
                        siz.push_back(a);
                    }
                }
                if (a2 == 2) {
                    if (fi.st_size > r2 * 1024 * 1024) {
                        result.push_back(name);
                        siz.push_back(a);
                    }
                }
                if (a2 == 3) {
                    if (fi.st_size > r2 * 1024 * 1024 * 1024) {
                        result.push_back(name);
                        siz.push_back(a);
                    }
                }

            }
        } while (FindNextFile(hFind, &data));
    }
    FindClose(hFind);
}