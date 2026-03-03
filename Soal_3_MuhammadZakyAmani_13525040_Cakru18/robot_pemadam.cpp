#include <bits/stdc++.h>

using namespace std;

class RobotPemadam{
private:
    int jarak;
    string status;

public:
    void inputSensor(int input){
        jarak = input;
    }

    void prosesLogika(){
        if(jarak > 20){
            status = "Maju mencari Api";
        }else if(jarak > 5){
            status = "UDAH DEKET NIH BRAY";
        }else{
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }

    void cetakStatus(){
        cout << "[Sensor: " << jarak << " cm] -> Action: [" << status <<"]" << endl;
    }
};

int main(){
    RobotPemadam robot;
    int input_jarak;

    while(true){
        cout << "Masukkan jarak sensor: ";
        cin >> input_jarak;

        if(input_jarak == 67){
            cout << "Program Berhenti." << endl;
            break;
        }

        robot.inputSensor(input_jarak);
        robot.prosesLogika();
        robot.cetakStatus();
    }

    return 0;

}