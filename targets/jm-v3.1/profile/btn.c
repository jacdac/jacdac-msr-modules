#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3d191537, "JM Btn v3.1");

void app_init_services() {
    board_init();
    btn_init(PIN_INT, 0, -1);
}
