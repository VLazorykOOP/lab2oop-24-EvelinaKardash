#pragma once
void task1();
void task2();
void task3();
void task4();
void MenuTask();
int main(){
    int task;
    MenuTask();
    cout <<"Enter task number (1, 2, 3): ";
    cin >> task;
    switch (task) {
        case 1:
            task1();
            break;

        case 2:
            task2();
            break;

        case 3:
            task3();
            break;

        default:
            cout<<"Error\n";

    }
    return 0;
}
