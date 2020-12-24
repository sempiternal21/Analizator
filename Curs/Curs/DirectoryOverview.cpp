#include "MyForm.h"


using namespace Curs;
void Curs::MyForm::button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    System::Diagnostics::Debug::Write(buttonStart->Text);
    if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        String^ text1 = folderBrowserDialog1->SelectedPath;
        label4->Text = text1;
        buttonStart->Visible = true;

    }
}
void Curs::MyForm::radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (countDirs != 0 || countFiles != 0) {
        label3->Text = "Размер КБ:";
        if (outSize < 100) {
            outSize = size / 1024.0;
            outSize = round(outSize * 100) / 100;
        }
        else {
            outSize = size / 1024;
        }
        lb3->Text = outSize.ToString();
    }
}
void Curs::MyForm::radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (countDirs != 0 || countFiles != 0) {
        label3->Text = "Размер МБ:";
        outSize = size / 1024.0 / 1024;
        outSize = round(outSize * 100) / 100;
        lb3->Text = outSize.ToString();
    }
}
void Curs::MyForm::radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (countDirs != 0 || countFiles != 0) {
        label3->Text = "Размер ГБ:";
        outSize = size / 1024.0 / 1024 / 1024;
        outSize = round(outSize * 100) / 100;
        lb3->Text = outSize.ToString();
    }
}
void Curs::MyForm::buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
    countDirs = 0;
    countFiles = 0;
    outSize = 0;
    size = 0;
    listBox1->Visible = true;
    listBox3->Visible = true;
    label6->Visible = true;
    label10->Visible = true;
    lb1->Visible = true;
    lb2->Visible = true;
    lb3->Visible = true;
    lb11->Visible = true;
    label2->Visible = true;
    label3->Visible = true;
    listBox1->Items->Clear();
    listBox3->Items->Clear();
    String^ text1 = label4->Text;
    std::wstring abc = marshal_as < std::wstring >(text1);
    std::string s2(abc.begin(), abc.end());

    setlocale(LC_ALL, "Russian");
    std::vector < std::string > files;
    std::vector < std::string > dirs;
    bool withVl;
    if (radioButton1->Checked) {
        withVl = true;
    }
    else {
        withVl = false;
    }
    GetFilesR(files, dirs, s2.c_str(), withVl);
    std::ifstream file;
    file.open("Tab1.txt");
    if (!file) {
        std::ofstream fout("Tab1.txt");
        fout.close();
    }
    std::ofstream out("Tab1.txt", std::ios::app);

    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    out << "Запуск от: " << asctime(timeinfo) << std::endl;
    out << "Найденные файлы: " << std::endl;
    for each (auto dir in files) {
        String^ str2 = gcnew String(dir.c_str());
        System::String^ str = gcnew System::String(str2);
        listBox1->Items->Add(str);
        std::string unmanaged = msclr::interop::marshal_as < std::string >(str);
        out << unmanaged << std::endl;
    }
    out << "--------" << std::endl << std::endl;
    out << "Найденные папки: " << std::endl;
    for each (auto dir in dirs) {
        String^ str2 = gcnew String(dir.c_str());
        System::String^ str = gcnew System::String(str2);
        listBox3->Items->Add(str);
        std::string unmanaged = msclr::interop::marshal_as < std::string >(str);
        out << unmanaged << std::endl;
    }
    lb1->Text = countDirs.ToString();
    lb2->Text = countFiles.ToString();
    out << "Количество папок: " << countDirs << std::endl;
    out << "Количество файлов: " << countFiles << std::endl;

    if (radioButton3->Checked) {
        label3->Text = "Размер КБ:";
        if (outSize < 100) {
            outSize = size / 1024.0;
            outSize = round(outSize * 100) / 100;
        }
        else {
            outSize = size / 1024;
        }
        lb3->Text = outSize.ToString();
        out << "Размер в КБ: " << outSize << std::endl;
    }
    if (radioButton4->Checked) {
        label3->Text = "Размер МБ:";
        outSize = size / 1024.0 / 1024;
        outSize = round(outSize * 100) / 100;
        lb3->Text = outSize.ToString();
        out << "Размер в МБ: " << outSize << std::endl;
    }
    if (radioButton5->Checked) {
        label3->Text = "Размер ГБ:";
        outSize = size / 1024.0 / 1024 / 1024;
        outSize = round(outSize * 100) / 100;
        lb3->Text = outSize.ToString();
        out << "Размер в ГБ: " << outSize << std::endl;
    }

    out << "-----------------------------------------------------------------------------------------" <<
        std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    out.close();

}
void Curs::MyForm::GetFilesR(std::vector < std::string >& result, std::vector < std::string >& dirs,
    const char* path, bool withVl) {
    HANDLE hFind;
    WIN32_FIND_DATA data;
    std::string folder(path);
    folder += "\\";
    std::string mask(folder);
    mask += "*.*";

    hFind = FindFirstFile(mask.c_str(), &data);
    if (hFind != INVALID_HANDLE_VALUE) {
        do {
            std::string name(folder);
            name += data.cFileName;
            if (data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
                if (strcmp(data.cFileName, ".") != 0 && strcmp(data.cFileName, "..") != 0) {
                    countDirs++;
                    dirs.push_back(name);
                    if (withVl) {
                        GetFilesR(result, dirs, name.c_str(), withVl);
                    }

                }
            }
            else {
                result.push_back(name);
                countFiles++;
                struct stat fi;
                const char* c = name.c_str();
                stat(c, &fi);
                size += fi.st_size;
            }
        } while (FindNextFile(hFind, &data));
    }
    FindClose(hFind);
}