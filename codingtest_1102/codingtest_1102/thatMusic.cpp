#include <string>
#include <vector>
#include <iostream>
#include <algorithm> 

using namespace std;

class MUSIC {
public:
    string code;
    string start_time;
    string finish_time;
    string title;
    int num_code;

    MUSIC( string s, string f, string t, string c) {
        code = c;
        start_time = s;
        finish_time = f;
        title = t;
    }

    string getCode() {
        return code;
    }

    string getStart_time() {
        return start_time;
    }

    string getFinish_time() {
        return finish_time;
    }

    string getTitle() {
        return title;
    }
    int getTime() {
        return num_code;
    }
    int code_() {
        start_time.erase(start_time.begin() + 2);
        finish_time.erase(finish_time.begin() + 2);
        int start_time_H = stoi(start_time.substr(0,2).c_str());//string���� at�� ���� ��ȯ���� �� �������� ���Ѵ�
        int finish_time_H = stoi(finish_time.substr(0, 2).c_str());//stoi ���� string�� char�� ���� ��ȯ����� �Ѵ�.
        int start_time_M = stoi(start_time.substr(2,2 ).c_str());
        int finish_time_M = stoi(finish_time.substr(2, 2).c_str());

        if (start_time_H == finish_time_H)
        {
            num_code = finish_time_M - start_time_M ;
        }
        else
        {
            num_code = (finish_time_H * 60 + finish_time_M - (start_time_H * 60 + start_time_M));
        }

        return num_code;
    }
};


string solution(string m, vector<string> musicinfos) {
    string answer = "";
    int info_size = musicinfos.size();
    int num_music = info_size / 4;
    string full_radio_music;
    vector<string> music_code_info = {};
    vector <string> candidate_Music;
    vector <int> time_candidate;
    for (int i = 0; i < num_music; i++) 
    {
        MUSIC music_{ musicinfos[i * 4], musicinfos[i * 4 + 1], musicinfos[i * 4 + 2], musicinfos[i * 4 + 3] };
        int code_num = music_.code_();
        int full_code = code_num / music_.getCode().size();
        int left_code = code_num % music_.getCode().size();

        for (int i = 0; i < full_code; i++) {
            full_radio_music += music_.getCode();
        }
        full_radio_music += music_.getCode().substr(0, left_code);
        if (full_radio_music.find(m) != string::npos) // ������ ��ü ����� �ð���ŭ�� �ڵ忡 m�� ����ִٸ�
        {
            candidate_Music.push_back(music_.getTitle());
            time_candidate.push_back(music_.getTime()); // �Ȱ��� ������� ��� �ð��� �ؾ� �ϴϱ�
        }
        music_code_info.push_back(full_radio_music);
        full_radio_music.clear();

    }

    int max_index = max_element(time_candidate.begin(), time_candidate.end()) - time_candidate.begin(); //algorithm max


    answer = candidate_Music[max_index];
    /*for (int k = 0; k < music_code_info.size();k++) {
        if (music_code_info[k].find(m) != string::npos)
            candidate.push_back
    }*/


    return answer;
}