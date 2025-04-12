#include <furi.h>
#include <gui/gui.h>

int32_t nfc_custom_app(void* p) {
    furi_crash("Custom NFC Tool Activated!");
    return 0;
}
