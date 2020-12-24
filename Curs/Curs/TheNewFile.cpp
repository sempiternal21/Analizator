#include "MyForm.h"


using namespace Curs;
using namespace System;
void Curs::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ text1;
    if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
        text1 = folderBrowserDialog1->SelectedPath;
        label7->Text = text1;
        groupBox5->Visible = true;
    }
}
void Curs::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
    listView1->Visible = true;
    std::vector < std::string > files;
    std::vector < std::string > dates;
    String^ text1;
    text1 = label7->Text;

    ListViewItem^ item1;
    listView1->Items->Clear();
    std::wstring abc = marshal_as < std::wstring >(text1);
    std::string s2(abc.begin(), abc.end());
    DateTime _date;
    _date = dateTimePicker1->Value;
    String^ tt = _date.ToShortDateString();
    String^ d = tt->Substring(0, 2);
    String^ m = tt->Substring(3, 2);
    String^ y = tt->Substring(6, 4);
    int k2 = Convert::ToInt32(numericUpDown4->Value);

    bool withVl;
    if (radioButton9->Checked) {
        withVl = true;

    }
    else {
        withVl = false;
    }
    GetFilesR3(files, dates, s2.c_str(), d, m, y, withVl);

    int min;
    if (k2 < dates.size()) {
        min = k2;
    }
    else {
        min = dates.size();
    }

    if (dates.size() != 0) {
        for (int i = 0; i < dates.size() - 1; i++) {
            for (int j = i + 1; j < dates.size(); j++) {
                std::string data = dates[i];
                System::String^ strWS = gcnew System::String(data.c_str());
                std::string day;
                std::string month;
                std::string year;
                int intYear, intDay, intMonth;
                if (data[2] == '.') {
                    day = data.substr(0, 2);
                    intDay = atoi(day.c_str());
                    if (data[5] == '.') {
                        month = data.substr(3, 2);
                        intMonth = atoi(month.c_str());
                    }
                    else {
                        month = data.substr(3, 1);
                        intMonth = atoi(month.c_str());
                    }
                }
                else {
                    day = data.substr(0, 1);
                    intDay = atoi(day.c_str());
                    if (data[4] == '.') {
                        month = data.substr(2, 2);
                        intMonth = atoi(month.c_str());
                    }
                    else {
                        month = data.substr(2, 1);
                        intMonth = atoi(month.c_str());
                    }
                }
                year = data.substr(data.length() - 4, 4);
                intYear = atoi(year.c_str());

                data = dates[j];
                strWS = gcnew System::String(data.c_str());
                int nextYear, nextDay, nextMonth;
                if (data[2] == '.') {
                    day = data.substr(0, 2);
                    nextDay = atoi(day.c_str());
                    if (data[5] == '.') {
                        month = data.substr(3, 2);
                        nextMonth = atoi(month.c_str());
                    }
                    else {
                        month = data.substr(3, 1);
                        nextMonth = atoi(month.c_str());
                    }
                }
                else {
                    day = data.substr(0, 1);
                    nextDay = atoi(day.c_str());
                    if (data[4] == '.') {
                        month = data.substr(2, 2);
                        nextMonth = atoi(month.c_str());
                    }
                    else {
                        month = data.substr(2, 1);
                        nextMonth = atoi(month.c_str());
                    }
                }
                year = data.substr(data.length() - 4, 4);
                nextYear = atoi(year.c_str());

                if (nextYear > intYear) {
                    std::string ssx = dates[i];
                    dates[i] = dates[j];
                    dates[j] = ssx;
                    ssx = files[i];
                    files[i] = files[j];
                    files[j] = ssx;
                    continue;
                }
                if (nextYear == intYear) {
                    if (nextMonth > intMonth) {
                        std::string ssx = dates[i];
                        dates[i] = dates[j];
                        dates[j] = ssx;
                        ssx = files[i];
                        files[i] = files[j];
                        files[j] = ssx;
                        continue;
                    }
                }
                if (nextYear == intYear) {
                    if (nextMonth == intMonth) {
                        if (nextDay > intDay) {
                            std::string ssx = dates[i];
                            dates[i] = dates[j];
                            dates[j] = ssx;
                            ssx = files[i];
                            files[i] = files[j];
                            files[j] = ssx;
                            continue;
                        }
                    }
                }
            }
        }
    }

    std::ifstream file;
    file.open("Tab3.txt");
    if (!file) {
        std::ofstream fout("Tab3.txt");
        fout.close();
    }
    std::ofstream out("Tab3.txt", std::ios::app);

    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    out << "Запуск от: " << asctime(timeinfo) << std::endl;
    out << "Найденные файлы и дата последнего изменения: " << std::endl;

    std::vector < std::string > ans;

    if (dates.size() != 0) {
        for (int i = 0; i < min; i++) {
            String^ fileName = gcnew String(files[i].c_str());
            String^ fileName2 = gcnew String(files[i].c_str());
            System::String^ str = gcnew System::String(fileName);
            item1 = gcnew ListViewItem(str, 0);
            listView1->Items->Add(item1);
            fileName = gcnew String(dates[i].c_str());
            str = gcnew System::String(fileName);
            item1->SubItems->Add(fileName);
            std::string unmanaged = msclr::interop::marshal_as < std::string >(fileName2);
            std::string unmanaged1 = msclr::interop::marshal_as < std::string >(fileName);
            out << unmanaged << "     " << unmanaged1 << std::endl;
        }
    }
    out << "------------------------------------------------------" << std::endl;
}
void Curs::MyForm::GetFilesR3(std::vector < std::string >& result, std::vector < std::string >& date,
    const char* path, String^ d, String^ m, String^ y, bool withVl) {
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
                if (withVl) {
                    if (strcmp(data.cFileName, ".") != 0 && strcmp(data.cFileName, "..") != 0) {
                        GetFilesR3(result, date, name.c_str(), d, m, y, withVl);
                    }
                }
            }
            else {
                System::String^ s = gcnew System::String(name.c_str());
                System::IO::FileInfo^ fii = gcnew System::IO::FileInfo(s);
                std::wstring wD = marshal_as < std::wstring >(d);
                std::string sD(wD.begin(), wD.end());
                std::wstring wY = marshal_as < std::wstring >(y);
                std::string sY(wY.begin(), wY.end());
                std::wstring wM = marshal_as < std::wstring >(m);
                std::string sM(wM.begin(), wM.end());
                std::wstring abc = marshal_as < std::wstring >(fii->LastWriteTime.Day.ToString());
                std::string dayFile(abc.begin(), abc.end());
                std::wstring abc2 = marshal_as < std::wstring >(fii->LastWriteTime.Month.ToString());
                std::string monthFile(abc2.begin(), abc2.end());
                std::wstring abc3 = marshal_as < std::wstring >(fii->LastWriteTime.Year.ToString());
                std::string yearFile(abc3.begin(), abc3.end());
                std::string r;
                r += dayFile;
                r += ".";
                r += monthFile;
                r += ".";
                r += yearFile;
                if (sY < yearFile) {
                    result.push_back(name);
                    date.push_back(r);
                    continue;
                }
                if (sY == yearFile) {
                    int zm = atoi(sM.c_str());
                    int zm1 = atoi(monthFile.c_str());
                    if (zm < zm1) {
                        result.push_back(name);
                        date.push_back(r);
                        continue;
                    }
                }
                if (sY == yearFile) {
                    if (sM == monthFile) {
                        int zd = atoi(sD.c_str());
                        int zd1 = atoi(dayFile.c_str());
                        if (zd < zd1) {
                            result.push_back(name);
                            date.push_back(r);
                        }
                    }
                }
            }
        } while (FindNextFile(hFind, &data));
    }
    FindClose(hFind);
}