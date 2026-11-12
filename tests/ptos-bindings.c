/* Verify binding ownership, explicit globals, argument forwarding and helpers. */
#include "gem.h"
static AESGLOBAL *received;
static short closed = 1;
short mt_appl_init(AESGLOBAL *global)
{
    received = global;
    global->ap_version = 0x400;
    global->ap_id = 17;
    return global->ap_id;
}
short mt_appl_exit(AESGLOBAL *global)
{
    received = global;
    if (closed) { global->ap_id = -1; global->ap_version = 0; }
    return closed;
}
short mt_wind_create(short kind, short x, short y, short w, short h, AESGLOBAL *global)
{
    received = global;
    return kind == 1 && x == 2 && y == 3 && w == 4 && h == 5 ? 23 : -1;
}
/* EmuDesk supplies some classic bindings itself. Extracting an unrelated
 * binding from the archive must not introduce another definition of this one. */
short wind_find(short x, short y) { return x + y; }
int main(void)
{
    AESGLOBAL other = { 0 };
    GRECT a = { 10,20,30,40 }, b = { 20,30,40,50 };
    if (gl_apid != -1 || aes_global.ap_id != -1 || gl_ap_version) return 1;
    aes_global.ap_private = 0x12345678L;
    if (appl_init() != 17 || received != &aes_global || gl_apid != 17 || gl_ap_version != 0x400) return 2;
    if (wind_create(1,2,3,4,5) != 23 || received != &aes_global) return 3;
    if (mt_appl_init(&other) != 17 || received != &other || other.ap_id != 17) return 4;
    if (mt_appl_exit(&other) != 1 || aes_global.ap_id != 17 || gl_apid != 17) return 5;
    closed = 0;
    if (appl_exit() || gl_apid != 17 || gl_ap_version != 0x400) return 6;
    closed = 1;
    if (appl_exit() != 1 || gl_apid != -1 || gl_ap_version || aes_global.ap_id != -1) return 7;
    if (_AESappglobal != 0x12345678L || !inside(10,20,&a) || inside(40,20,&a)) return 8;
    if (!rc_intersect(&a,&b) || b.g_x != 20 || b.g_y != 30 || b.g_w != 20 || b.g_h != 30) return 9;
    if (wind_find(3,4) != 7) return 10;
    return 0;
}
