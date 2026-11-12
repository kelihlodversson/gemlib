/* Native pTOS source bindings. Copyright (C) 2026 the pTOS development team.
 * GPL version 2 or later. */
#ifndef GEMLIB_PTOS_GEM_H
#define GEMLIB_PTOS_GEM_H
#include "mt_gem.h"
#include <rectfunc.h>
#ifdef __cplusplus
extern "C" {
#endif
extern AESGLOBAL aes_global;
extern short gl_apid, gl_ap_version;
#define _AESversion (aes_global.ap_version)
#define _AESnumapps (aes_global.ap_count)
#define _AESapid (aes_global.ap_id)
#define _AESappglobal (aes_global.ap_private)
#define _AESrscfile (aes_global.ap_ptree)
#define _AESrscmem (aes_global.ap_rscmem)
#define _AESrsclen (aes_global.ap_rsclen)

short appl_control(short id, short mode, void *output);
short appl_exit(void);
short appl_find(const char *name);
short appl_getinfo(short type, short *out1, short *out2, short *out3, short *out4);
short appl_init(void);
short appl_read(short id, short length, void *buffer);
short appl_search(short mode, char *name, short *type, short *id);
short appl_write(short id, short length, void *buffer);
short appl_yield(void);
short evnt_button(short clicks, short mask, short state, short *mx, short *my, short *buttons, short *modifiers);
short evnt_dclick(short rate, short set);
short evnt_keybd(void);
short evnt_mesag(short message[8]);
short evnt_mouse(short leave, short x, short y, short width, short height, short *mx, short *my, short *buttons, short *modifiers);
short evnt_multi(short events, short clicks, short button_mask, short button_state,
                 short m1_leave, short m1_x, short m1_y, short m1_w, short m1_h,
                 short m2_leave, short m2_x, short m2_y, short m2_w, short m2_h,
                 short message[], unsigned long interval, short *mx, short *my,
                 short *buttons, short *modifiers, short *key, short *click_count);
short evnt_timer(unsigned long interval);
short form_alert(short default_button, const char *alert);
short form_button(OBJECT *tree, short object, short clicks, short *next);
short form_center(OBJECT *tree, short *x, short *y, short *w, short *h);
short form_center_grect(OBJECT *tree, GRECT *rect);
short form_dial(short kind, short sx, short sy, short sw, short sh, short x, short y, short w, short h);
short form_do(OBJECT *tree, short start);
short form_error(short error);
short form_keybd(OBJECT *tree, short object, short proposed, short key, short *next, short *remaining);
short fsel_exinput(char *path, char *selection, short *button, const char *title);
short fsel_input(char *path, char *selection, short *button);
short graf_dragbox(short w, short h, short x, short y, short bx, short by, short bw, short bh, short *rx, short *ry);
short graf_growbox(short sx, short sy, short sw, short sh, short x, short y, short w, short h);
short graf_growbox_grect(const GRECT *small, const GRECT *large);
short graf_handle(short *wchar, short *hchar, short *wbox, short *hbox);
short graf_mbox(short w, short h, short sx, short sy, short dx, short dy);
short graf_mkstate(short *mx, short *my, short *buttons, short *modifiers);
short graf_mouse(short mode, const MFORM *form);
short graf_rubberbox(short x, short y, short wmin, short hmin, short *w, short *h);
short graf_shrinkbox(short sx, short sy, short sw, short sh, short x, short y, short w, short h);
short graf_shrinkbox_grect(const GRECT *small, const GRECT *large);
short graf_slidebox(OBJECT *tree, short parent, short object, short vertical);
short graf_watchbox(OBJECT *tree, short object, short in_state, short out_state);
short menu_bar(OBJECT *tree, short show);
short menu_icheck(OBJECT *tree, short item, short check);
short menu_ienable(OBJECT *tree, short item, short enable);
short menu_popup(MENU *menu, short x, short y, MENU *result);
short menu_register(short ap_id, const char *text);
short menu_text(OBJECT *tree, short item, const char *text);
short menu_tnormal(OBJECT *tree, short item, short normal);
short objc_add(OBJECT *tree, short parent, short child);
short objc_change(OBJECT *tree, short object, short reserved, short x, short y, short w, short h, short state, short redraw);
short objc_delete(OBJECT *tree, short object);
short objc_draw(OBJECT *tree, short start, short depth, short x, short y, short w, short h);
short objc_edit(OBJECT *tree, short object, short key, short *index, short kind);
short objc_find(OBJECT *tree, short start, short depth, short mx, short my);
short objc_offset(OBJECT *tree, short object, short *x, short *y);
short objc_order(OBJECT *tree, short object, short position);
short objc_sysvar(short mode, short which, short in1, short in2, short *out1, short *out2);
short rsrc_free(void);
short rsrc_gaddr(short type, short index, void *address);
short rsrc_load(const char *name);
short rsrc_obfix(OBJECT *tree, short object);
short rsrc_rcfix(void *header);
short rsrc_saddr(short type, short index, void *address);
short scrp_read(char *path);
short scrp_write(const char *path);
short shel_envrn(char **result, const char *prefix);
short shel_find(char *path);
short shel_get(char *buffer, short length);
short shel_put(const char *buffer, short length);
void shel_rdef(char *command, char *directory);
short shel_read(char *command, char *tail);
void shel_wdef(const char *command, const char *directory);
short shel_write(short mode, short graphical, short execution, const void *command, const char *tail);
short wind_calc(short type, short kind, short x, short y, short w, short h, short *ox, short *oy, short *ow, short *oh);
short wind_calc_grect(short type, short kind, const GRECT *in, GRECT *out);
short wind_close(short id);
short wind_create(short kind, short x, short y, short w, short h);
short wind_create_grect(short kind, const GRECT *rect);
short wind_delete(short id);
short wind_find(short x, short y);
short wind_get(short id, short field, short *a, short *b, short *c, short *d);
short wind_get_grect(short id, short field, GRECT *rect);
short wind_get_int(short id, short field, short *value);
short wind_get_ptr(short id, short field, void **pointer);
short wind_new(void);
short wind_open(short id, short x, short y, short w, short h);
short wind_open_grect(short id, const GRECT *rect);
short wind_set(short id, short field, short a, short b, short c, short d);
short wind_set_grect(short id, short field, const GRECT *rect);
short wind_set_int(short id, short field, short value);
short wind_set_ptr(short id, short field, void *pointer);
short wind_set_ptr_int(short id, short field, void *pointer, short value);
short wind_set_str(short id, short field, const char *text);
short wind_update(short code);
#ifdef __cplusplus
}
#endif
#endif
