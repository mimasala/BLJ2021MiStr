#include <stdio.h>
#include <windows.h>
#include <winuser.h>



int main() {
    INPUT input;
    memset(&input,0,sizeof(input));
    input.type=INPUT_KEYBOARD;

    Sleep(3000);
    for (int j = 1; j < 100; j++) {
        j= j+'0';
        input.ki.wVk=VkKeyScanA(j);
        //How many Seconds after running the Keypressing will beginn
        for (int i = 0; i < 10; i++) {
            //The speed of the keypressing
            Sleep(25);
            SendInput(1, &input, sizeof(INPUT));
        }
    }

}


// <-- change input
//How many Seconds after running the Keypressing will beginn


/*
for (int i = 12293; i < 12393; ++i) {
input.ki.wVk=VkKeyScanA(i);
}
*/